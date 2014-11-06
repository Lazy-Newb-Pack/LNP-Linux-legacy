namespace DFWV
{
    partial class MapForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.viewToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.sitesToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.civilizationsToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.battlesToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.regionsToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.HFtoolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.constructionsToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.mapsToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.picMap = new System.Windows.Forms.PictureBox();
            this.mapTableLayout = new System.Windows.Forms.TableLayoutPanel();
            this.pnlMap = new System.Windows.Forms.Panel();
            this.picMiniMap = new System.Windows.Forms.PictureBox();
            this.panel1 = new System.Windows.Forms.Panel();
            this.lblMapParentCiv = new System.Windows.Forms.Label();
            this.lblMapOwner = new System.Windows.Forms.Label();
            this.lblMapCoords = new System.Windows.Forms.Label();
            this.lblMapOwnerCaption = new System.Windows.Forms.Label();
            this.lblMapType = new System.Windows.Forms.Label();
            this.lblMapTypeCaption = new System.Windows.Forms.Label();
            this.lblMapParentCaption = new System.Windows.Forms.Label();
            this.lblMapAltName = new System.Windows.Forms.Label();
            this.lblMapNickNameCaption = new System.Windows.Forms.Label();
            this.lblMapName = new System.Windows.Forms.Label();
            this.lblMapNameCaption = new System.Windows.Forms.Label();
            this.sitetypesToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.ownedsitesToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.neutralsitesToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.menuStrip1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.picMap)).BeginInit();
            this.mapTableLayout.SuspendLayout();
            this.pnlMap.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.picMiniMap)).BeginInit();
            this.panel1.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.viewToolStripMenuItem,
            this.mapsToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Padding = new System.Windows.Forms.Padding(4, 2, 0, 2);
            this.menuStrip1.Size = new System.Drawing.Size(901, 24);
            this.menuStrip1.TabIndex = 0;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // viewToolStripMenuItem
            // 
            this.viewToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.sitesToolStripMenuItem,
            this.civilizationsToolStripMenuItem,
            this.battlesToolStripMenuItem,
            this.regionsToolStripMenuItem,
            this.HFtoolStripMenuItem,
            this.constructionsToolStripMenuItem});
            this.viewToolStripMenuItem.Name = "viewToolStripMenuItem";
            this.viewToolStripMenuItem.Size = new System.Drawing.Size(44, 20);
            this.viewToolStripMenuItem.Text = "&View";
            // 
            // sitesToolStripMenuItem
            // 
            this.sitesToolStripMenuItem.CheckOnClick = true;
            this.sitesToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.sitetypesToolStripMenuItem,
            this.ownedsitesToolStripMenuItem,
            this.neutralsitesToolStripMenuItem});
            this.sitesToolStripMenuItem.Name = "sitesToolStripMenuItem";
            this.sitesToolStripMenuItem.Size = new System.Drawing.Size(212, 22);
            this.sitesToolStripMenuItem.Text = "&Sites";
            this.sitesToolStripMenuItem.CheckedChanged += new System.EventHandler(this.ViewOptionChanged);
            // 
            // civilizationsToolStripMenuItem
            // 
            this.civilizationsToolStripMenuItem.CheckOnClick = true;
            this.civilizationsToolStripMenuItem.Name = "civilizationsToolStripMenuItem";
            this.civilizationsToolStripMenuItem.Size = new System.Drawing.Size(212, 22);
            this.civilizationsToolStripMenuItem.Text = "&Civilizations";
            this.civilizationsToolStripMenuItem.CheckedChanged += new System.EventHandler(this.ViewOptionChanged);
            // 
            // battlesToolStripMenuItem
            // 
            this.battlesToolStripMenuItem.CheckOnClick = true;
            this.battlesToolStripMenuItem.Name = "battlesToolStripMenuItem";
            this.battlesToolStripMenuItem.Size = new System.Drawing.Size(212, 22);
            this.battlesToolStripMenuItem.Text = "&Battles (testing)";
            this.battlesToolStripMenuItem.CheckedChanged += new System.EventHandler(this.ViewOptionChanged);
            // 
            // regionsToolStripMenuItem
            // 
            this.regionsToolStripMenuItem.CheckOnClick = true;
            this.regionsToolStripMenuItem.Name = "regionsToolStripMenuItem";
            this.regionsToolStripMenuItem.Size = new System.Drawing.Size(212, 22);
            this.regionsToolStripMenuItem.Text = "Regions (testing)";
            this.regionsToolStripMenuItem.CheckedChanged += new System.EventHandler(this.ViewOptionChanged);
            // 
            // HFtoolStripMenuItem
            // 
            this.HFtoolStripMenuItem.CheckOnClick = true;
            this.HFtoolStripMenuItem.Name = "HFtoolStripMenuItem";
            this.HFtoolStripMenuItem.Size = new System.Drawing.Size(212, 22);
            this.HFtoolStripMenuItem.Text = "Historical Figures (testing)";
            this.HFtoolStripMenuItem.CheckedChanged += new System.EventHandler(this.ViewOptionChanged);
            // 
            // constructionsToolStripMenuItem
            // 
            this.constructionsToolStripMenuItem.CheckOnClick = true;
            this.constructionsToolStripMenuItem.Name = "constructionsToolStripMenuItem";
            this.constructionsToolStripMenuItem.Size = new System.Drawing.Size(212, 22);
            this.constructionsToolStripMenuItem.Text = "Constructions (testing)";
            this.constructionsToolStripMenuItem.CheckedChanged += new System.EventHandler(this.ViewOptionChanged);
            // 
            // mapsToolStripMenuItem
            // 
            this.mapsToolStripMenuItem.Name = "mapsToolStripMenuItem";
            this.mapsToolStripMenuItem.Size = new System.Drawing.Size(48, 20);
            this.mapsToolStripMenuItem.Text = "&Maps";
            // 
            // picMap
            // 
            this.picMap.Location = new System.Drawing.Point(0, 0);
            this.picMap.Margin = new System.Windows.Forms.Padding(2);
            this.picMap.Name = "picMap";
            this.picMap.Size = new System.Drawing.Size(411, 397);
            this.picMap.SizeMode = System.Windows.Forms.PictureBoxSizeMode.AutoSize;
            this.picMap.TabIndex = 1;
            this.picMap.TabStop = false;
            this.picMap.Paint += new System.Windows.Forms.PaintEventHandler(this.picMap_Paint);
            this.picMap.MouseDown += new System.Windows.Forms.MouseEventHandler(this.picMap_MouseDown);
            this.picMap.MouseMove += new System.Windows.Forms.MouseEventHandler(this.picMap_MouseMove);
            // 
            // mapTableLayout
            // 
            this.mapTableLayout.ColumnCount = 2;
            this.mapTableLayout.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 100F));
            this.mapTableLayout.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Absolute, 188F));
            this.mapTableLayout.Controls.Add(this.pnlMap, 0, 0);
            this.mapTableLayout.Controls.Add(this.picMiniMap, 1, 1);
            this.mapTableLayout.Controls.Add(this.panel1, 1, 0);
            this.mapTableLayout.Dock = System.Windows.Forms.DockStyle.Fill;
            this.mapTableLayout.Location = new System.Drawing.Point(0, 24);
            this.mapTableLayout.Margin = new System.Windows.Forms.Padding(2);
            this.mapTableLayout.Name = "mapTableLayout";
            this.mapTableLayout.RowCount = 2;
            this.mapTableLayout.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 100F));
            this.mapTableLayout.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 122F));
            this.mapTableLayout.Size = new System.Drawing.Size(901, 529);
            this.mapTableLayout.TabIndex = 3;
            // 
            // pnlMap
            // 
            this.pnlMap.AutoScroll = true;
            this.pnlMap.Controls.Add(this.picMap);
            this.pnlMap.Dock = System.Windows.Forms.DockStyle.Fill;
            this.pnlMap.Location = new System.Drawing.Point(2, 2);
            this.pnlMap.Margin = new System.Windows.Forms.Padding(2);
            this.pnlMap.Name = "pnlMap";
            this.mapTableLayout.SetRowSpan(this.pnlMap, 2);
            this.pnlMap.Size = new System.Drawing.Size(709, 525);
            this.pnlMap.TabIndex = 2;
            this.pnlMap.Scroll += new System.Windows.Forms.ScrollEventHandler(this.pnlMap_Scroll);
            // 
            // picMiniMap
            // 
            this.picMiniMap.Dock = System.Windows.Forms.DockStyle.Fill;
            this.picMiniMap.Location = new System.Drawing.Point(715, 409);
            this.picMiniMap.Margin = new System.Windows.Forms.Padding(2);
            this.picMiniMap.Name = "picMiniMap";
            this.picMiniMap.Size = new System.Drawing.Size(184, 118);
            this.picMiniMap.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.picMiniMap.TabIndex = 3;
            this.picMiniMap.TabStop = false;
            this.picMiniMap.Paint += new System.Windows.Forms.PaintEventHandler(this.picMiniMap_Paint);
            this.picMiniMap.MouseDown += new System.Windows.Forms.MouseEventHandler(this.picMiniMap_MouseDown);
            this.picMiniMap.MouseMove += new System.Windows.Forms.MouseEventHandler(this.picMiniMap_MouseMove);
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.lblMapParentCiv);
            this.panel1.Controls.Add(this.lblMapOwner);
            this.panel1.Controls.Add(this.lblMapCoords);
            this.panel1.Controls.Add(this.lblMapOwnerCaption);
            this.panel1.Controls.Add(this.lblMapType);
            this.panel1.Controls.Add(this.lblMapTypeCaption);
            this.panel1.Controls.Add(this.lblMapParentCaption);
            this.panel1.Controls.Add(this.lblMapAltName);
            this.panel1.Controls.Add(this.lblMapNickNameCaption);
            this.panel1.Controls.Add(this.lblMapName);
            this.panel1.Controls.Add(this.lblMapNameCaption);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.panel1.Location = new System.Drawing.Point(715, 2);
            this.panel1.Margin = new System.Windows.Forms.Padding(2);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(184, 403);
            this.panel1.TabIndex = 4;
            // 
            // lblMapParentCiv
            // 
            this.lblMapParentCiv.AutoSize = true;
            this.lblMapParentCiv.Location = new System.Drawing.Point(58, 85);
            this.lblMapParentCiv.Name = "lblMapParentCiv";
            this.lblMapParentCiv.Size = new System.Drawing.Size(25, 13);
            this.lblMapParentCiv.TabIndex = 75;
            this.lblMapParentCiv.Text = "      ";
            // 
            // lblMapOwner
            // 
            this.lblMapOwner.AutoSize = true;
            this.lblMapOwner.Location = new System.Drawing.Point(58, 64);
            this.lblMapOwner.Name = "lblMapOwner";
            this.lblMapOwner.Size = new System.Drawing.Size(25, 13);
            this.lblMapOwner.TabIndex = 74;
            this.lblMapOwner.Text = "      ";
            // 
            // lblMapCoords
            // 
            this.lblMapCoords.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.lblMapCoords.AutoSize = true;
            this.lblMapCoords.Location = new System.Drawing.Point(1, 389);
            this.lblMapCoords.Name = "lblMapCoords";
            this.lblMapCoords.Size = new System.Drawing.Size(35, 13);
            this.lblMapCoords.TabIndex = 73;
            this.lblMapCoords.Text = "label2";
            // 
            // lblMapOwnerCaption
            // 
            this.lblMapOwnerCaption.AutoSize = true;
            this.lblMapOwnerCaption.Location = new System.Drawing.Point(3, 64);
            this.lblMapOwnerCaption.Name = "lblMapOwnerCaption";
            this.lblMapOwnerCaption.Size = new System.Drawing.Size(41, 13);
            this.lblMapOwnerCaption.TabIndex = 72;
            this.lblMapOwnerCaption.Text = "Owner:";
            // 
            // lblMapType
            // 
            this.lblMapType.AutoSize = true;
            this.lblMapType.Location = new System.Drawing.Point(58, 43);
            this.lblMapType.Name = "lblMapType";
            this.lblMapType.Size = new System.Drawing.Size(25, 13);
            this.lblMapType.TabIndex = 67;
            this.lblMapType.Text = "      ";
            // 
            // lblMapTypeCaption
            // 
            this.lblMapTypeCaption.AutoSize = true;
            this.lblMapTypeCaption.Location = new System.Drawing.Point(3, 43);
            this.lblMapTypeCaption.Name = "lblMapTypeCaption";
            this.lblMapTypeCaption.Size = new System.Drawing.Size(34, 13);
            this.lblMapTypeCaption.TabIndex = 66;
            this.lblMapTypeCaption.Text = "Type:";
            // 
            // lblMapParentCaption
            // 
            this.lblMapParentCaption.AutoSize = true;
            this.lblMapParentCaption.Location = new System.Drawing.Point(3, 85);
            this.lblMapParentCaption.Name = "lblMapParentCaption";
            this.lblMapParentCaption.Size = new System.Drawing.Size(59, 13);
            this.lblMapParentCaption.TabIndex = 65;
            this.lblMapParentCaption.Text = "Parent Civ:";
            // 
            // lblMapAltName
            // 
            this.lblMapAltName.AutoSize = true;
            this.lblMapAltName.Location = new System.Drawing.Point(58, 22);
            this.lblMapAltName.Name = "lblMapAltName";
            this.lblMapAltName.Size = new System.Drawing.Size(25, 13);
            this.lblMapAltName.TabIndex = 64;
            this.lblMapAltName.Text = "      ";
            // 
            // lblMapNickNameCaption
            // 
            this.lblMapNickNameCaption.AutoSize = true;
            this.lblMapNickNameCaption.Location = new System.Drawing.Point(3, 22);
            this.lblMapNickNameCaption.Name = "lblMapNickNameCaption";
            this.lblMapNickNameCaption.Size = new System.Drawing.Size(58, 13);
            this.lblMapNickNameCaption.TabIndex = 63;
            this.lblMapNickNameCaption.Text = "Nickname:";
            // 
            // lblMapName
            // 
            this.lblMapName.AutoSize = true;
            this.lblMapName.Location = new System.Drawing.Point(58, 0);
            this.lblMapName.Name = "lblMapName";
            this.lblMapName.Size = new System.Drawing.Size(25, 13);
            this.lblMapName.TabIndex = 62;
            this.lblMapName.Text = "      ";
            // 
            // lblMapNameCaption
            // 
            this.lblMapNameCaption.AutoSize = true;
            this.lblMapNameCaption.Location = new System.Drawing.Point(3, 0);
            this.lblMapNameCaption.Name = "lblMapNameCaption";
            this.lblMapNameCaption.Size = new System.Drawing.Size(41, 13);
            this.lblMapNameCaption.TabIndex = 61;
            this.lblMapNameCaption.Text = "Name: ";
            // 
            // sitetypesToolStripMenuItem
            // 
            this.sitetypesToolStripMenuItem.Enabled = false;
            this.sitetypesToolStripMenuItem.Name = "sitetypesToolStripMenuItem";
            this.sitetypesToolStripMenuItem.Size = new System.Drawing.Size(152, 22);
            this.sitetypesToolStripMenuItem.Text = "Types";
            // 
            // ownedsitesToolStripMenuItem
            // 
            this.ownedsitesToolStripMenuItem.CheckOnClick = true;
            this.ownedsitesToolStripMenuItem.Enabled = false;
            this.ownedsitesToolStripMenuItem.Name = "ownedsitesToolStripMenuItem";
            this.ownedsitesToolStripMenuItem.Size = new System.Drawing.Size(152, 22);
            this.ownedsitesToolStripMenuItem.Text = "Owned";
            this.ownedsitesToolStripMenuItem.CheckedChanged += new System.EventHandler(this.ViewOptionChanged);
            // 
            // neutralsitesToolStripMenuItem
            // 
            this.neutralsitesToolStripMenuItem.CheckOnClick = true;
            this.neutralsitesToolStripMenuItem.Enabled = false;
            this.neutralsitesToolStripMenuItem.Name = "neutralsitesToolStripMenuItem";
            this.neutralsitesToolStripMenuItem.Size = new System.Drawing.Size(152, 22);
            this.neutralsitesToolStripMenuItem.Text = "Neutral";
            this.neutralsitesToolStripMenuItem.CheckedChanged += new System.EventHandler(this.ViewOptionChanged);
            // 
            // MapForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(901, 553);
            this.Controls.Add(this.mapTableLayout);
            this.Controls.Add(this.menuStrip1);
            this.MainMenuStrip = this.menuStrip1;
            this.Margin = new System.Windows.Forms.Padding(2);
            this.Name = "MapForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.Manual;
            this.Text = "Map";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.MapForm_FormClosing);
            this.Move += new System.EventHandler(this.MapForm_Move);
            this.Resize += new System.EventHandler(this.MapForm_Resize);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.picMap)).EndInit();
            this.mapTableLayout.ResumeLayout(false);
            this.pnlMap.ResumeLayout(false);
            this.pnlMap.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.picMiniMap)).EndInit();
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.PictureBox picMap;
        private System.Windows.Forms.TableLayoutPanel mapTableLayout;
        private System.Windows.Forms.Panel pnlMap;
        private System.Windows.Forms.PictureBox picMiniMap;
        private System.Windows.Forms.ToolStripMenuItem viewToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem sitesToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem mapsToolStripMenuItem;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label lblMapOwnerCaption;
        private System.Windows.Forms.Label lblMapTypeCaption;
        private System.Windows.Forms.Label lblMapParentCaption;
        public System.Windows.Forms.Label lblMapAltName;
        private System.Windows.Forms.Label lblMapNickNameCaption;
        public System.Windows.Forms.Label lblMapName;
        private System.Windows.Forms.Label lblMapNameCaption;
        public System.Windows.Forms.Label lblMapCoords;
        public System.Windows.Forms.Label lblMapParentCiv;
        public System.Windows.Forms.Label lblMapOwner;
        public System.Windows.Forms.Label lblMapType;
        private System.Windows.Forms.ToolStripMenuItem civilizationsToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem battlesToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem regionsToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem HFtoolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem constructionsToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem sitetypesToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem ownedsitesToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem neutralsitesToolStripMenuItem;
    }
}