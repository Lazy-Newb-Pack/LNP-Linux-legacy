using System.Drawing.Drawing2D;
using DFWV.WorldClasses;
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Globalization;
using System.Linq;
using System.Windows.Forms;
using DFWV.WorldClasses.HistoricalEventCollectionClasses;
using Region = DFWV.WorldClasses.Region;

namespace DFWV
{
    public partial class MapForm : Form
    {
        readonly World World;
        string selectedMap = "Main";
        Bitmap MapOverlay;
        Size mapSize;
        Size siteSize;
        Site selectedSite;
        int SiteSelection;
        Region selectedRegion;
        private List<string> selectedSiteTypes = new List<string>();
 
        public MapForm()
        {
            InitializeComponent();
        }

        internal MapForm(World world)
        {
            InitializeComponent();
            World = world;
            LoadMaps();
            LoadSiteTypes();
            ChangeMap();
            DrawMaps();
        }

        private Size MiniMapBoxSize 
        { 
            get  
            {
                return new Size((int)((float)pnlMap.ClientSize.Width / picMap.Width * picMiniMap.Width),
                                    (int)((float)pnlMap.ClientSize.Height / picMap.Height * picMiniMap.Height));
            }
            
        }

        private void LoadMaps()
        {

            var  newItem = new ToolStripMenuItem("Main") {CheckOnClick = true, Checked = true};
            newItem.Click += MapSelectionClicked;
            mapsToolStripMenuItem.DropDownItems.Add(newItem);
            foreach (var mapitem in World.Maps)
            {
                if (mapitem.Key == "Main") continue;
                var thisItem = new ToolStripMenuItem(mapitem.Key) {CheckOnClick = true};
                thisItem.Click += MapSelectionClicked;
                mapsToolStripMenuItem.DropDownItems.Add(thisItem);
            }
        }

        private void LoadSiteTypes()
        {
            foreach (var siteType in WorldClasses.Site.Types)
            {
                var thisItem = new ToolStripMenuItem(siteType) { CheckOnClick = true };
                thisItem.Click += SiteTypeSelectionClicked;
                sitetypesToolStripMenuItem.DropDownItems.Add(thisItem);
            }
        }

        private void SiteTypeSelectionClicked(object sender, EventArgs e)
        {
            selectedSiteTypes.Clear();
            foreach (ToolStripMenuItem sitetypeItem in sitetypesToolStripMenuItem.DropDownItems)
            {
                if (sitetypeItem.Checked)
                    selectedSiteTypes.Add(sitetypeItem.Text);
            }
            redrawOverlay();
        }

        private void ChangeMap()
        {
            if (picMap.Image != null)
                picMap.Image.Dispose();
            picMap.Image = Image.FromFile(World.Maps[selectedMap]);
            picMap.Size = picMap.Image.Size;
            if (picMiniMap.Image != null)
                picMiniMap.Image.Dispose();
            
            picMiniMap.Image = Image.FromFile(World.Maps[selectedMap]);

            var sizeString = World.Parameters.First(x => x.Name == "DIM").Value;
            var sizeX = Convert.ToInt32(sizeString.Split(':')[0]);
            var sizeY = Convert.ToInt32(sizeString.Split(':')[1]);
            mapSize = new Size(sizeX, sizeY);
            siteSize = new Size(picMap.Image.Size.Width / mapSize.Width,
                                picMap.Image.Size.Height / mapSize.Height);

            redrawOverlay();
            DrawMaps();
        }

        private void DrawMaps()
        {
            picMiniMap.Invalidate();
            picMap.Invalidate();
        }

        #region Overlay Drawing
        
        private void redrawOverlay()
        {
            if (MapOverlay == null || MapOverlay.Size != new Size(picMap.Image.Width, picMap.Image.Height))
            {
                if (MapOverlay != null)
                    MapOverlay.Dispose();
                MapOverlay = new Bitmap(picMap.Image.Width, picMap.Image.Height);
            }
            var g = Graphics.FromImage(MapOverlay);
            g.Clear(Color.Transparent);
            if (sitesToolStripMenuItem.Checked)
                DrawSiteOverlay(g);
            if (civilizationsToolStripMenuItem.Checked)
                DrawCivOverlay(g);
            if (battlesToolStripMenuItem.Checked)
                DrawBattleOverlay(g);
            if (regionsToolStripMenuItem.Checked)
                DrawRegionOverlay(g);
            if (HFtoolStripMenuItem.Checked)
                DrawHFOverlay(g);
            if (constructionsToolStripMenuItem.Checked)
                DrawWorldConstructionOverlay(g);

            DrawMaps();
        }

        private void DrawSiteOverlay(Graphics g)
        {
            foreach (var site in World.Sites.Values)
            {
                if (!selectedSiteTypes.Contains(WorldClasses.Site.Types[site.Type])) 
                    continue;
                if (site.Parent == null && !neutralsitesToolStripMenuItem.Checked)
                    continue;
                if (site.Parent != null && !neutralsitesToolStripMenuItem.Checked)
                    continue;


                var myColor = site.Parent == null ? Color.White : site.Parent.Color;
                using (var p = new Pen(myColor))
                {
                    using (Brush b = new SolidBrush(Color.FromArgb(150,myColor)))
                    {
                        g.FillRectangle(b, site.Coords.X * siteSize.Width, site.Coords.Y * siteSize.Height, siteSize.Width - 1, siteSize.Height - 1);
                        g.DrawRectangle(p, site.Coords.X * siteSize.Width, site.Coords.Y * siteSize.Height, siteSize.Width - 1, siteSize.Height - 1);
                    }
                }
            }
        }

        private void DrawCivOverlay(Graphics g)
        {
            foreach (var site in World.Sites.Values)
            {
                if (site.Parent == null || site.Parent.FirstSite == site) continue;
                var myColor = Color.FromArgb(100,site.Parent.Color);
                using (var p = new Pen( myColor))
                {
                    if (site.CreatedEvent != null && site.CreatedEvent.Civ.Civilization != site.Parent)
                        p.DashStyle = DashStyle.Dot;
                    else
                        p.DashStyle = DashStyle.Solid;

                    var Gap = (int)((siteSize.Width + siteSize.Height) / 2.0);
                    var FromPoint = new Point(site.Parent.FirstSite.Coords.X * siteSize.Width + siteSize.Width / 2,
                        site.Parent.FirstSite.Coords.Y * siteSize.Height + siteSize.Height / 2);
                    var ToPoint = new Point(site.Coords.X * siteSize.Width + siteSize.Width / 2,
                        site.Coords.Y * siteSize.Height + siteSize.Height / 2);
                    if (!(Math.Sqrt(Math.Pow(FromPoint.X - ToPoint.X, 2) + Math.Pow(FromPoint.Y - ToPoint.Y, 2)) > Gap))
                        continue;
                    var ang = Math.Atan2(FromPoint.Y - ToPoint.Y, FromPoint.X - ToPoint.X);
                    FromPoint.X = (int)(FromPoint.X - Math.Cos(ang) * Gap);
                    FromPoint.Y = (int)(FromPoint.Y - Math.Sin(ang) * Gap);
                    ToPoint.X = (int)(ToPoint.X + Math.Cos(ang) * Gap);
                    ToPoint.Y = (int)(ToPoint.Y + Math.Sin(ang) * Gap);

                    g.DrawLine(p, FromPoint, ToPoint);
                }
            }
        }

        private void DrawBattleOverlay(Graphics g)
        {
            foreach (var evtcol in World.HistoricalEventCollections.Values.Where(x => HistoricalEventCollection.Types[x.Type] == "battle"))
            {
                var battleEventCol = (EC_Battle) evtcol;
                if (!battleEventCol.battleTotaled) continue;
                var BattlePoint = new Point(battleEventCol.Coords.X * siteSize.Width + siteSize.Width / 2,
                    battleEventCol.Coords.Y * siteSize.Height + siteSize.Height / 2);
                var radius = (int)Math.Sqrt(battleEventCol.BattleData.AttackingDeaths + battleEventCol.BattleData.DefendingDeaths);
                if (battleEventCol.AttackingSquad != null)
                {
                    foreach (var squad in battleEventCol.AttackingSquad)
                    {
                        if (squad.Site == null) continue;
                        var SitePoint = new Point(squad.Site.Coords.X * siteSize.Width + siteSize.Width / 2,
                            squad.Site.Coords.Y * siteSize.Height + siteSize.Height / 2);
                        var alpha = (int)(Math.Sqrt(squad.Number / 10f) < 255 ? Math.Sqrt(squad.Number) : 255);
                        if (alpha == 0)
                            alpha = 1;
                        using (var p = new Pen(Color.FromArgb(alpha, Color.Blue)))
                        {
                            g.DrawLine(p, SitePoint, BattlePoint);
                        }
                    }
                }
                if (battleEventCol.DefendingSquad != null)
                {
                    foreach (var squad in battleEventCol.DefendingSquad)
                    {
                        if (squad.Site == null) continue;
                        var SitePoint = new Point(squad.Site.Coords.X * siteSize.Width + siteSize.Width / 2,
                            squad.Site.Coords.Y * siteSize.Height + siteSize.Height / 2);

                        var alpha = (int)(Math.Sqrt(squad.Number / 10f) < 255 ? Math.Sqrt(squad.Number) : 255); 
                        if (alpha == 0)
                            alpha = 1;
                        using (var p = new Pen(Color.FromArgb(alpha, Color.Green)))
                        {
                            g.DrawLine(p, SitePoint, BattlePoint);
                        }
                    }
                }
                g.DrawEllipse(Pens.Red, BattlePoint.X - radius, BattlePoint.Y - radius, radius * 2, radius * 2);
                g.DrawLine(Pens.Red, new Point(BattlePoint.X - radius, BattlePoint.Y), BattlePoint);
                g.DrawLine(Pens.Red, new Point(BattlePoint.X , BattlePoint.Y - radius), BattlePoint);
            }
        }

        private void DrawRegionOverlay(Graphics g)
        {
            var ColorNames = new List<string>
            {"#00FF00", "#0000FF", "#FF0000", "#01FFFE", "#FFA6FE", "#FFDB66", "#006401", "#010067", 
                "#95003A", "#007DB5", "#FF00F6", "#FFEEE8", "#774D00", "#90FB92", "#0076FF", "#D5FF00", 
                "#FF937E", "#6A826C", "#FF029D", "#FE8900", "#7A4782", "#7E2DD2", "#85A900", "#FF0056", 
                "#A42400", "#00AE7E", "#683D3B", "#BDC6FF", "#263400", "#BDD393", "#00B917", "#9E008E", 
                "#001544", "#C28C9F", "#FF74A3", "#01D0FF", "#004754", "#E56FFE", "#788231", "#0E4CA1", 
                "#91D0CB", "#BE9970", "#968AE8", "#BB8800", "#43002C", "#DEFF74", "#00FFC6", "#FFE502", 
                "#620E00", "#008F9C", "#98FF52", "#7544B1", "#B500FF", "#00FF78", "#FF6E41", "#005F39", 
                "#6B6882", "#5FAD4E", "#A75740", "#A5FFD2", "#FFB167", "#009BFF", "#E85EBE"};
            var rnd = new Random();
            
            var curDistinctColor = 0; 
            foreach (var region in World.Regions.Values.Where(region => region.Coords != null))
            {
                curDistinctColor++;
                Color thisColor;
                if (curDistinctColor < ColorNames.Count)
                {
                    var rgb = Int32.Parse(ColorNames[curDistinctColor].Replace("#", ""), NumberStyles.HexNumber);
                    thisColor = Color.FromArgb(255,Color.FromArgb(rgb));
                }
                else
                {
                    thisColor = Color.FromArgb(rnd.Next(150) + 100, rnd.Next(150) + 100, rnd.Next(150) + 100);
                }
                using (var p = new Pen(thisColor))
                {
                    using (Brush b = new SolidBrush(Color.FromArgb(150, thisColor)))
                    {
                        if (region.HighestCoord.IsEmpty)
                            region.HighestCoord = region.Coords[0];
                        if (region.LowestCoord.IsEmpty)
                            region.LowestCoord = region.Coords[0];

                        foreach (var coord in region.Coords)
                        {
                            if (coord.X > region.HighestCoord.X)
                                region.HighestCoord.X = coord.X;
                            if (coord.Y > region.HighestCoord.Y)
                                region.HighestCoord.Y = coord.Y;
                            if (coord.X < region.LowestCoord.X)
                                region.LowestCoord.X = coord.X;
                            if (coord.Y < region.LowestCoord.Y)
                                region.LowestCoord.Y = coord.Y;
                                
                            g.FillRectangle(b, coord.X * siteSize.Width, coord.Y * siteSize.Height, siteSize.Width - 1, siteSize.Height - 1);
                            g.DrawRectangle(p, coord.X * siteSize.Width, coord.Y * siteSize.Height, siteSize.Width - 1, siteSize.Height - 1);
                        }
                        g.FillRectangle(b, region.LowestCoord.X * siteSize.Width, region.LowestCoord.Y * siteSize.Height,
                            (region.HighestCoord.X - region.LowestCoord.X + 1) * siteSize.Width,
                            (region.HighestCoord.Y - region.LowestCoord.Y + 1) * siteSize.Height);
                        g.DrawRectangle(p, region.LowestCoord.X * siteSize.Width, region.LowestCoord.Y * siteSize.Height,
                            (region.HighestCoord.X - region.LowestCoord.X + 1) * siteSize.Width,
                            (region.HighestCoord.Y - region.LowestCoord.Y + 1) * siteSize.Height);
                    }
                }
            }
        }

        private void DrawHFOverlay(Graphics g)
        {
            var CoordPop = new Dictionary<Point, int>();


            foreach (var hf in World.HistoricalFigures.Values.Where(x => x.DiedEvent == null))
            {
                var hfCoord = Point.Empty;
                if (hf.Site != null)
                    hfCoord = hf.Site.Coords;
                else if (hf.Coords != Point.Empty)
                    hfCoord = hf.Coords;
                else if (hf.Region != null)
                    continue;

                if (hfCoord == Point.Empty) continue;
                if (!CoordPop.ContainsKey(hfCoord))
                    CoordPop.Add(hfCoord, 1);
                else
                    CoordPop[hfCoord]++;
            }

            var maxPop = Math.Sqrt(CoordPop.Values.Max());

            foreach (var coord in CoordPop.Keys)
            {
                //Point CoordPoint = new Point(coord.X * siteSize.Width + siteSize.Width / 2,
                //    coord.Y * siteSize.Height + siteSize.Height / 2);
                //int radius = (int)Math.Sqrt(CoordPop[coord]);
                //int radius = CoordPop[coord];
                //g.DrawEllipse(Pens.Red, CoordPoint.X - radius, CoordPoint.Y - radius, radius * 2, radius * 2);

                var red = (int)(255.0f * (Math.Sqrt(CoordPop[coord]) / maxPop));

                using (Brush b = new SolidBrush(Color.FromArgb(225, red, 0, 0)))
                {
                    g.FillRectangle(b, coord.X * siteSize.Width + 1, coord.Y * siteSize.Height + 1, siteSize.Width - 2, siteSize.Height - 2);
                }

            }

        }

        private void DrawWorldConstructionOverlay(Graphics g)
        {
            foreach (var wc in World.WorldConstructions.Values)
            {
                Color myColor;
                if (wc.CreatedEvent != null && wc.CreatedEvent.Civ != null && wc.CreatedEvent.Civ.Civilization != null)
                    myColor = wc.CreatedEvent.Civ.Civilization.Color;
                else
                    myColor = Color.White;
                using (var p = new Pen(myColor))
                {
                    
                    p.DashStyle = DashStyle.Solid;
                    p.Width = 3;

                    var Gap = (int)((siteSize.Width + siteSize.Height) / 4.0);
                    var FromPoint = new Point(wc.From.Coords.X * siteSize.Width + siteSize.Width / 2,
                                            wc.From.Coords.Y * siteSize.Height + siteSize.Height / 2);
                    var ToPoint = new Point(wc.To.Coords.X * siteSize.Width + siteSize.Width / 2,
                                            wc.To.Coords.Y * siteSize.Height + siteSize.Height / 2);
                    if (!(Math.Sqrt(Math.Pow(FromPoint.X - ToPoint.X, 2) + Math.Pow(FromPoint.Y - ToPoint.Y, 2)) > Gap))
                        continue;
                    var ang = Math.Atan2(FromPoint.Y - ToPoint.Y, FromPoint.X - ToPoint.X);
                    FromPoint.X = (int)(FromPoint.X - Math.Cos(ang) * Gap);
                    FromPoint.Y = (int)(FromPoint.Y - Math.Sin(ang) * Gap);
                    ToPoint.X = (int)(ToPoint.X + Math.Cos(ang) * Gap);
                    ToPoint.Y = (int)(ToPoint.Y + Math.Sin(ang) * Gap);

                    g.DrawLine(p, FromPoint, ToPoint);
                }
            }

        }

        #endregion
        
        #region Form Events

        private void MapSelectionClicked(object sender, EventArgs e)
        {
            UncheckOtherToolStripMenuItems((ToolStripMenuItem)sender);
            selectedMap = ((ToolStripMenuItem)sender).Text;


            ChangeMap();
        }

        private static void UncheckOtherToolStripMenuItems(ToolStripMenuItem selectedMenuItem)
        {
            selectedMenuItem.Checked = true;

            foreach (var ltoolStripMenuItem in (from object
                                                    item in selectedMenuItem.Owner.Items
                                                let ltoolStripMenuItem = item as ToolStripMenuItem
                                                where ltoolStripMenuItem != null
                                                where !item.Equals(selectedMenuItem)
                                                select ltoolStripMenuItem))
                (ltoolStripMenuItem).Checked = false;

        }

        private void picMap_Paint(object sender, PaintEventArgs e)
        {


            e.Graphics.DrawImage(MapOverlay, new Point(0, 0));
        }

        private void picMiniMap_Paint(object sender, PaintEventArgs e)
        {

            var percentX = (float)pnlMap.HorizontalScroll.Value / pnlMap.HorizontalScroll.Maximum;
            var pointX = (int)(percentX * picMiniMap.Width);
            var percentY = (float)pnlMap.VerticalScroll.Value / pnlMap.VerticalScroll.Maximum;
            var pointY = (int)(percentY * picMiniMap.Height);
            var topLeft = new Point(pointX, pointY);

            var rectSize = MiniMapBoxSize;

            //this.Text = ((float)pnlMap.ClientSize.Width / picMap.Width).ToString() + " - " + ((float)pnlMap.ClientSize.Height / picMap.Height).ToString();
            e.Graphics.DrawRectangle(Pens.White, new Rectangle(topLeft, rectSize));
        }

        private void MapForm_Resize(object sender, EventArgs e)
        {
            DrawMaps();
        }

        private void MapForm_Move(object sender, EventArgs e)
        {
            DrawMaps();
        }

        private void pnlMap_Scroll(object sender, ScrollEventArgs e)
        {
            DrawMaps();
        }

        private void ViewOptionChanged(object sender, EventArgs e)
        {
            var tItem = (ToolStripMenuItem)sender;
            if (tItem.DropDownItems.Count > 0)
            {
                foreach (ToolStripMenuItem item in tItem.DropDownItems)
                {
                    item.Enabled = tItem.Checked;
                }
            }
            redrawOverlay();
        }

        private void picMiniMap_MouseDown(object sender, MouseEventArgs e)
        {
            MiniMapCenterOn(new Point(e.X, e.Y));
        }

        private void MiniMapCenterOn(Point loc)
        {
            if (pnlMap.HorizontalScroll.Visible)
            {
                var newX = (int)((float)pnlMap.HorizontalScroll.Maximum * (loc.X - MiniMapBoxSize.Width / 2) / picMiniMap.Width);

                if (newX < 0)
                    newX = 0;
                pnlMap.HorizontalScroll.Value = newX < pnlMap.HorizontalScroll.Maximum ? newX : pnlMap.HorizontalScroll.Maximum;
            }
            if (pnlMap.VerticalScroll.Visible)
            {
                var newY = (int)((float)pnlMap.VerticalScroll.Maximum * (loc.Y - MiniMapBoxSize.Height / 2) / picMiniMap.Height);
                newY -= MiniMapBoxSize.Height / 2;
                if (newY < 0)
                    newY = 0;
                pnlMap.VerticalScroll.Value = newY < pnlMap.VerticalScroll.Maximum ? newY : pnlMap.VerticalScroll.Maximum;
            }
            picMiniMap.Invalidate();

        }

        private void picMiniMap_MouseMove(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
                MiniMapCenterOn(new Point(e.X, e.Y));
        }

        private void picMap_MouseMove(object sender, MouseEventArgs e)
        {
            var mouseCoord = new Point(e.X / siteSize.Width, e.Y / siteSize.Height);
            lblMapCoords.Text = string.Format("({0}, {1})", mouseCoord.X, mouseCoord.Y);
            if (sitesToolStripMenuItem.Checked)
            {
                selectedSite = GetSiteAt(mouseCoord);
                if (selectedSite != null)
                {
                    lblMapName.Text = selectedSite.ToString();
                    lblMapAltName.Text = selectedSite.AltName;

                    lblMapOwner.Text = selectedSite.Owner != null ? selectedSite.Owner.ToString() : "";
                    lblMapParentCiv.Text = selectedSite.Parent != null ? selectedSite.Parent.ToString() : "";
                    lblMapType.Text = WorldClasses.Site.Types[selectedSite.Type];
                    lblMapNickNameCaption.Visible = true;
                    lblMapOwnerCaption.Visible = true;
                    lblMapParentCaption.Visible = true;
                }
                else
                {
                    lblMapName.Text = "";
                    lblMapAltName.Text = "";
                    lblMapOwner.Text = "";
                    lblMapParentCiv.Text = "";
                    lblMapType.Text = "";

                }
            }
            else if (regionsToolStripMenuItem.Checked)
            {
                selectedRegion = GetRegionAt(mouseCoord);
                if (selectedRegion != null)
                {
                    lblMapName.Text = selectedRegion.ToString();
                    lblMapType.Text = WorldClasses.Region.Types[selectedRegion.Type];
                    lblMapNickNameCaption.Visible = true;
                    lblMapOwnerCaption.Visible = true;
                    lblMapParentCaption.Visible = true;
                }
                else
                {
                    lblMapName.Text = "";
                    lblMapType.Text = "";
                }
            }
        }

        private Region GetRegionAt(Point coord)
        {
            return World.Regions.Values.Where(region => region.Coords != null).FirstOrDefault(region => region.Coords.Contains(coord));
        }

        private Site GetSiteAt(Point coord)
        {
            return World.Sites.Values.FirstOrDefault(site => selectedSiteTypes.Contains(WorldClasses.Site.Types[site.Type]) && site.Coords == coord);
        }

        private void MapForm_FormClosing(object sender, FormClosingEventArgs e)
        {
            Visible = false;
            e.Cancel = true;

        }

        private void picMap_MouseDown(object sender, MouseEventArgs e)
        {
            switch (e.Button)
            {
                case MouseButtons.Left:
                    if (sitesToolStripMenuItem.Checked && selectedSite != null)
                    {
                        selectedSite.Select(Program.mainForm);
                        Program.mainForm.BringToFront();
                    }
                    else if (regionsToolStripMenuItem.Checked && selectedRegion != null)
                    {
                        selectedRegion.Select(Program.mainForm);
                        Program.mainForm.BringToFront();
                    }
                    break;
                case MouseButtons.Right:
                    SiteSelection++;
                    break;
            }
        }

        #endregion


        internal void Select(Point loc)
        {
            BringToFront();

            MiniMapCenterOn(new Point((int)(picMiniMap.Width * (float)loc.X / mapSize.Width), (int)(picMiniMap.Height * (float)loc.Y / mapSize.Height)));

            var locationOnForm = picMap.PointToScreen(Point.Empty);
                
            Cursor.Position = new Point(loc.X * siteSize.Width + locationOnForm.X + siteSize.Width / 2, loc.Y * siteSize.Height + locationOnForm.Y + siteSize.Height / 2);

        }
    }
}
