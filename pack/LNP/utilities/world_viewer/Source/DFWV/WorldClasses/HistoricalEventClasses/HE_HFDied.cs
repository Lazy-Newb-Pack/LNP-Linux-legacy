using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.Xml.Linq;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses.HistoricalEventClasses
{
    class HE_HFDied : HistoricalEvent
    {
        private int? HFID { get; set; }
        public HistoricalFigure HF { get; private set; }
        private int? FeatureLayerID { get; set; }
        private int? SlayerHFID { get; set; }
        public HistoricalFigure SlayerHF { get; private set; }
        private int? SlayerItemID { get; set; }
        private Artifact SlayerItem { get; set; }
        private int? SlayerShooterItemID { get; set; }
        private Artifact SlayerShooterItem { get; set; }
        private string SlayerRace_ { get; set; }
        private Race SlayerRace { get; set; }
        private int SlayerCaste { get; set; }
        public int Cause { get; private set; }
        public static List<string> Causes = new List<string>();
        private int? SiteID { get; set; }
        public Site Site { get; private set; }
        private int? SubregionID { get; set; }
        public Region Subregion { get; private set; }

        override public Point Location { get { return Site != null ? Site.Location : (Subregion != null ? Subregion.Location : Point.Empty); } }

        public HE_HFDied(XDocument xdoc, World world)
            : base(xdoc, world)
        {
            foreach (var element in xdoc.Root.Elements())
            {
                var val = element.Value;
                int valI;
                Int32.TryParse(val, out valI);

                switch (element.Name.LocalName)
                {
                    case "id":
                    case "year":
                    case "seconds72":
                    case "type":
                        break;
                    case "site_id":
                        if (valI != -1)
                            SiteID = valI;
                        break;
                    case "subregion_id":
                        if (valI != -1)
                            SubregionID = valI;
                        break;
                    case "feature_layer_id":
                        if (valI != -1)
                            FeatureLayerID = valI;
                        break;
                    case "hfid":
                        HFID = valI;
                        break;
                    case "slayer_hfid":
                        if (valI != -1)
                            SlayerHFID = valI;
                        break;
                    case "slayer_race":
                        SlayerRace_ = val;
                        break;
                    case "slayer_caste":
                        if (!HistoricalFigure.Castes.Contains(val))
                            HistoricalFigure.Castes.Add(val);
                        SlayerCaste = HistoricalFigure.Castes.IndexOf(val);
                        break;
                    case "slayer_item_id":
                        if (valI != -1)
                            SlayerItemID = valI;
                        break;
                    case "slayer_shooter_item_id":
                        if (valI != -1)
                            SlayerShooterItemID = valI;
                        break;
                    case "cause":
                        if (!Causes.Contains(val))
                            Causes.Add(val);
                        Cause = Causes.IndexOf(val);
                        break;
                    default:
                        DFXMLParser.UnexpectedXMLElement(xdoc.Root.Name.LocalName + "\t" + Types[Type], element, xdoc.Root.ToString());
                        break;
                }
            }
        }
        internal override void Link()
        {
            base.Link();
            if (HFID.HasValue && World.HistoricalFigures.ContainsKey(HFID.Value))
                HF = World.HistoricalFigures[HFID.Value];
            if (SiteID.HasValue && World.Sites.ContainsKey(SiteID.Value))
                Site = World.Sites[SiteID.Value];
            if (SubregionID.HasValue && World.Regions.ContainsKey(SubregionID.Value))
                Subregion = World.Regions[SubregionID.Value];
            if (SlayerHFID.HasValue && World.HistoricalFigures.ContainsKey(SlayerHFID.Value))
                SlayerHF = World.HistoricalFigures[SlayerHFID.Value];
            if (SlayerRace_ != null)
            {
                SlayerRace = World.GetAddRace(SlayerRace_);
                SlayerRace_ = null;
            }
            if (SlayerItemID.HasValue && World.Artifacts.ContainsKey(SlayerItemID.Value))
                SlayerItem = World.Artifacts[SlayerItemID.Value];
            if (SlayerShooterItemID.HasValue && World.Artifacts.ContainsKey(SlayerShooterItemID.Value))
                SlayerShooterItem = World.Artifacts[SlayerShooterItemID.Value];
        }

        internal override void Process()
        {
            base.Process();
            if (HF != null)
                HF.DiedEvent = this;
            if (SlayerHF != null)
            {
                if (SlayerHF.SlayingEvents == null)
                    SlayerHF.SlayingEvents = new List<HE_HFDied>();
                SlayerHF.SlayingEvents.Add(this);
            }
            if (SlayerItem != null)
            {
                if (SlayerItem.Kills == null)
                    SlayerItem.Kills = new List<HE_HFDied>();
                SlayerItem.Kills.Add(this);
            }
            if (SlayerShooterItem != null)
            {
                if (SlayerShooterItem.Kills == null)
                    SlayerShooterItem.Kills = new List<HE_HFDied>();
                SlayerShooterItem.Kills.Add(this);
            }
            if (HF != null)
            {
                if (HF.Events == null)
                    HF.Events = new List<HistoricalEvent>();
                HF.Events.Add(this);
            }
            if (SlayerHF == null) return;
            if (SlayerHF.Events == null)
                SlayerHF.Events = new List<HistoricalEvent>();
            SlayerHF.Events.Add(this);
        }

        protected override void WriteDataOnParent(MainForm frm, Control parent, ref Point location)
        {
            EventLabel(frm, parent, ref location, "HF:", HF);
            EventLabel(frm, parent, ref location, "Cause:", Causes[Cause]);
            if (SlayerHF != null)
                EventLabel(frm, parent, ref location, "Slayer:", SlayerHF);
            else if (SlayerHFID.HasValue)
                EventLabel(frm, parent, ref location, "Slayer:", SlayerHFID.ToString());
            if (SlayerRace != null)
                EventLabel(frm, parent, ref location, " Race:", SlayerRace);
            else if (SlayerRace_ != null)
                EventLabel(frm, parent, ref location, " Race:", SlayerRace_);
            EventLabel(frm, parent, ref location, " Caste:", HistoricalFigure.Castes[SlayerCaste]);
            if (Site != null)
                EventLabel(frm, parent, ref location, "Site:", Site);
            else if (SiteID.HasValue)
                EventLabel(frm, parent, ref location, "Site:", SiteID.ToString());
            if (Subregion != null)
                EventLabel(frm, parent, ref location, "Region:", Subregion);
            else if (SubregionID.HasValue)
                EventLabel(frm, parent, ref location, "Region:", SubregionID.ToString());

        }

        protected override string LegendsDescription()
        {
            var timestring = base.LegendsDescription();

            switch (Causes[Cause])
            {
                case "struck":
                    return string.Format("{0} the {1} {2} was struck down by \nthe {3} {4} in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "shot":
                    return string.Format("{0} the {1} {2} was shot and killed by \nthe {3} {4} in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "murdered":
                    return string.Format("{0} the {1} {2} was murdered by \nthe {3} {4} in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "old age":
                    return string.Format("{0} the {1} {2} died of old age.",
                        timestring, HF.Race, HF);
                case "infection":
                    return string.Format("{0} the {1} {2} succumbed to infection, slain by \nthe {3} {4} in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "blood":
                    if (SlayerHF == null)
                        return string.Format("{0} the {1} {2} bled to death in {3}.",
                            timestring, HF.Race, HF,
                            Site == null ? SiteID.ToString() : Site.AltName);
                    return string.Format("{0} the {1} {2} bled to death, slain by the {3} {4} with ITEM: {5} in {6}.",
                        timestring, HF.Race, HF, SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(), SlayerItemID,
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "thirst":
                    return string.Format("{0} the {1} {2} died of thirst in {3}.",
                        timestring, HF.Race, HF,
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "collapsed":
                    return string.Format("{0} the {1} {2} collapsed, struck down by \nthe {3} {4} in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "vanish":
                    return string.Format("{0} the {1} {2} vanished in {3}.",
                        timestring, HF.Race, HF,
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "drown":
                    return string.Format("{0} the {1} {2} drowned in {3}.",
                        timestring, HF.Race, HF,
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "crushed bridge":
                    return string.Format("{0} the {1} {2} was crushed by a drawbridge in {3}.",
                        timestring, HF.Race, HF,
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "put to rest":
                    return string.Format("{0} the {1} {2} was put to rest in {3}.",
                        timestring, HF.Race, HF,
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "quitdead":
                    return string.Format("{0} the {1} {2} starved to death in {3}.",
                        timestring, HF.Race, HF,
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "exec beheaded":
                    return string.Format("{0} the {1} {2} was beheaded by \nthe {3} {4} in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "exec burned alive":
                    return string.Format("{0} the {1} {2} burned \nthe {3} {4} alive in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "exec fed to beasts":
                    return string.Format("{0} the {1} {2} fed \nthe {3} {4} to beasts in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "exec hacked to pieces":
                    return string.Format("{0} the {1} {2} hacked \nthe {3} {4} to pieces in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "exec drowned":
                    return string.Format("{0} the {1} {2} drowned \nthe {3} {4} in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "exec buried alive":
                    return string.Format("{0} the {1} {2} buried \nthe {3} {4} alive in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "exec crucified":
                    return string.Format("{0} the {1} {2} was crucified by \nthe {3} {4} alive in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "air":
                    return string.Format("{0} the {1} {2} suffocated, slain by {3} {4} alive in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "obstacle":
                    return string.Format("{0} the {1} {2} died after colliding with an obstacle, slain by {3} {4} in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site != null ? Site.AltName : (SiteID != null ? SiteID.ToString() : Subregion.ToString()));
                case "hunger":
                    return string.Format("{0} the {1} {2} starved to death in {3}.",
                        timestring, HF.Race, HF,
                         Site == null ? SiteID.ToString() : Site.AltName);
                case "scuttled":
                    return string.Format("{0} {2} a {1} was scuttled in {3}.",
                        timestring, HF.Race, HF,
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "spikes":
                    return string.Format("{0} the {1} {2} was impaled on spikes in {3}.",
                        timestring, HF.Race, HF,
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "scared to death":
                    return string.Format("{0} the {1} {2} was scared to death by \nthe {3} {4} in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "slaughtered":
                    return string.Format("{0} {2} a {1} was slaughtered in {5} by {4} a {3}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site == null ? SiteID.ToString() : Site.AltName);
                case "trap":
                    return string.Format("{0} the {1} {2} was killed by a trap in {3}.",
                        timestring, HF.Race, HF,
                        Site.AltName);
                case "blood drained":
                    return string.Format("{0} the {1} {2} was drained of blood by \nthe {3} {4} in {5}.",
                        timestring, HF.Race, HF,
                        SlayerRace == null ? "" : SlayerRace.ToString(), SlayerHF == null ? SlayerHFID.ToString() : SlayerHF.ToString(),
                        Site != null ? Site.AltName : (SiteID != null ? SiteID.ToString() : Subregion.ToString()));

            }

            return timestring;
        }

        internal override string ToTimelineString()
        {
            var timelinestring = base.ToTimelineString();
            if (Site == null)
            {
                if (SlayerHF == null)
                    return string.Format("{0} {1} died.",
                        timelinestring, HF != null ? HF.ToString() : HFID.ToString());
                return string.Format("{0} {1} killed by {2}.",
                    timelinestring, HF != null ? HF.ToString() : HFID.ToString(), SlayerHF);
            }
            if (SlayerHF == null)
                return string.Format("{0} {1} died at {2}",
                    timelinestring, HF != null ? HF.ToString() : HFID.ToString(), Site.AltName);
            return string.Format("{0} {1} killed at {2} by {3}",
                timelinestring, HF != null ? HF.ToString() : HFID.ToString(), Site.AltName, SlayerHF);
        }

        internal override void Export(string table)
        {
            base.Export(table);


            table = GetType().Name;


            
            var vals = new List<object> { ID, HFID, SlayerHFID, SlayerRace == null ? (object)DBNull.Value : SlayerRace.ToString(), HistoricalFigure.Castes[SlayerCaste], SlayerItemID, SlayerShooterItemID, Causes[Cause], SiteID, SubregionID, FeatureLayerID   };


            Database.ExportWorldItem(table, vals);

        }

    }
}
