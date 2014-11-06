namespace DFWV
{
    partial class TimelineForm
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
            this.components = new System.ComponentModel.Container();
            this.Start = new System.Windows.Forms.Button();
            this.EventTimer = new System.Windows.Forms.Timer(this.components);
            this.Restart = new System.Windows.Forms.Button();
            this.chkEventCritical = new System.Windows.Forms.CheckBox();
            this.chkEventMajor = new System.Windows.Forms.CheckBox();
            this.chkEventMinor = new System.Windows.Forms.CheckBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.chkEventCollectionMinor = new System.Windows.Forms.CheckBox();
            this.chkEventCollectionCritical = new System.Windows.Forms.CheckBox();
            this.Clear = new System.Windows.Forms.Button();
            this.ShowMap = new System.Windows.Forms.Button();
            this.picMap = new System.Windows.Forms.PictureBox();
            this.trackSpeed = new System.Windows.Forms.TrackBar();
            this.lstEvents = new DFWV.Controls.FlickerFreeListBox();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.picMap)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackSpeed)).BeginInit();
            this.SuspendLayout();
            // 
            // Start
            // 
            this.Start.Location = new System.Drawing.Point(554, 13);
            this.Start.Name = "Start";
            this.Start.Size = new System.Drawing.Size(75, 23);
            this.Start.TabIndex = 1;
            this.Start.Text = "Start";
            this.Start.UseVisualStyleBackColor = true;
            this.Start.Click += new System.EventHandler(this.Start_Click);
            // 
            // EventTimer
            // 
            this.EventTimer.Interval = 1000;
            this.EventTimer.Tick += new System.EventHandler(this.EventTimer_Tick);
            // 
            // Restart
            // 
            this.Restart.Location = new System.Drawing.Point(637, 13);
            this.Restart.Name = "Restart";
            this.Restart.Size = new System.Drawing.Size(75, 23);
            this.Restart.TabIndex = 2;
            this.Restart.Text = "Restart";
            this.Restart.UseVisualStyleBackColor = true;
            this.Restart.Click += new System.EventHandler(this.Restart_Click);
            // 
            // chkEventCritical
            // 
            this.chkEventCritical.AutoSize = true;
            this.chkEventCritical.Checked = true;
            this.chkEventCritical.CheckState = System.Windows.Forms.CheckState.Checked;
            this.chkEventCritical.Location = new System.Drawing.Point(6, 19);
            this.chkEventCritical.Name = "chkEventCritical";
            this.chkEventCritical.Size = new System.Drawing.Size(57, 17);
            this.chkEventCritical.TabIndex = 3;
            this.chkEventCritical.Text = "Critical";
            this.chkEventCritical.UseVisualStyleBackColor = true;
            // 
            // chkEventMajor
            // 
            this.chkEventMajor.AutoSize = true;
            this.chkEventMajor.Location = new System.Drawing.Point(6, 42);
            this.chkEventMajor.Name = "chkEventMajor";
            this.chkEventMajor.Size = new System.Drawing.Size(52, 17);
            this.chkEventMajor.TabIndex = 4;
            this.chkEventMajor.Text = "Major";
            this.chkEventMajor.UseVisualStyleBackColor = true;
            // 
            // chkEventMinor
            // 
            this.chkEventMinor.AutoSize = true;
            this.chkEventMinor.Location = new System.Drawing.Point(6, 65);
            this.chkEventMinor.Name = "chkEventMinor";
            this.chkEventMinor.Size = new System.Drawing.Size(52, 17);
            this.chkEventMinor.TabIndex = 5;
            this.chkEventMinor.Text = "Minor";
            this.chkEventMinor.UseVisualStyleBackColor = true;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.chkEventCritical);
            this.groupBox1.Controls.Add(this.chkEventMajor);
            this.groupBox1.Controls.Add(this.chkEventMinor);
            this.groupBox1.Location = new System.Drawing.Point(589, 50);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(71, 92);
            this.groupBox1.TabIndex = 6;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Events";
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.chkEventCollectionMinor);
            this.groupBox2.Controls.Add(this.chkEventCollectionCritical);
            this.groupBox2.Location = new System.Drawing.Point(666, 50);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(109, 92);
            this.groupBox2.TabIndex = 7;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Events Collections";
            // 
            // chkEventCollectionMinor
            // 
            this.chkEventCollectionMinor.AutoSize = true;
            this.chkEventCollectionMinor.Location = new System.Drawing.Point(6, 51);
            this.chkEventCollectionMinor.Name = "chkEventCollectionMinor";
            this.chkEventCollectionMinor.Size = new System.Drawing.Size(52, 17);
            this.chkEventCollectionMinor.TabIndex = 6;
            this.chkEventCollectionMinor.Text = "Minor";
            this.chkEventCollectionMinor.UseVisualStyleBackColor = true;
            // 
            // chkEventCollectionCritical
            // 
            this.chkEventCollectionCritical.AutoSize = true;
            this.chkEventCollectionCritical.Checked = true;
            this.chkEventCollectionCritical.CheckState = System.Windows.Forms.CheckState.Checked;
            this.chkEventCollectionCritical.Location = new System.Drawing.Point(6, 28);
            this.chkEventCollectionCritical.Name = "chkEventCollectionCritical";
            this.chkEventCollectionCritical.Size = new System.Drawing.Size(57, 17);
            this.chkEventCollectionCritical.TabIndex = 4;
            this.chkEventCollectionCritical.Text = "Critical";
            this.chkEventCollectionCritical.UseVisualStyleBackColor = true;
            // 
            // Clear
            // 
            this.Clear.Location = new System.Drawing.Point(718, 12);
            this.Clear.Name = "Clear";
            this.Clear.Size = new System.Drawing.Size(57, 23);
            this.Clear.TabIndex = 8;
            this.Clear.Text = "Clear";
            this.Clear.UseVisualStyleBackColor = true;
            this.Clear.Click += new System.EventHandler(this.Clear_Click);
            // 
            // ShowMap
            // 
            this.ShowMap.Location = new System.Drawing.Point(554, 150);
            this.ShowMap.Name = "ShowMap";
            this.ShowMap.Size = new System.Drawing.Size(221, 23);
            this.ShowMap.TabIndex = 9;
            this.ShowMap.Text = "Show Map";
            this.ShowMap.UseVisualStyleBackColor = true;
            this.ShowMap.Click += new System.EventHandler(this.ShowMap_Click);
            // 
            // picMap
            // 
            this.picMap.Location = new System.Drawing.Point(13, 191);
            this.picMap.Name = "picMap";
            this.picMap.Size = new System.Drawing.Size(762, 458);
            this.picMap.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.picMap.TabIndex = 10;
            this.picMap.TabStop = false;
            this.picMap.Paint += new System.Windows.Forms.PaintEventHandler(this.picMap_Paint);
            // 
            // trackSpeed
            // 
            this.trackSpeed.Location = new System.Drawing.Point(554, 44);
            this.trackSpeed.Minimum = 1;
            this.trackSpeed.Name = "trackSpeed";
            this.trackSpeed.Orientation = System.Windows.Forms.Orientation.Vertical;
            this.trackSpeed.Size = new System.Drawing.Size(45, 100);
            this.trackSpeed.TabIndex = 11;
            this.trackSpeed.Value = 5;
            this.trackSpeed.Scroll += new System.EventHandler(this.trackSpeed_Scroll);
            // 
            // lstEvents
            // 
            this.lstEvents.DrawMode = System.Windows.Forms.DrawMode.OwnerDrawFixed;
            this.lstEvents.FormattingEnabled = true;
            this.lstEvents.Location = new System.Drawing.Point(13, 13);
            this.lstEvents.Name = "lstEvents";
            this.lstEvents.Size = new System.Drawing.Size(535, 160);
            this.lstEvents.TabIndex = 0;
            this.lstEvents.DrawItem += new System.Windows.Forms.DrawItemEventHandler(this.lstEvents_DrawItem);
            this.lstEvents.SelectedIndexChanged += new System.EventHandler(this.lstEvents_SelectedIndexChanged);
            this.lstEvents.DoubleClick += new System.EventHandler(this.lstEvents_DoubleClick);
            // 
            // TimelineForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(783, 180);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.trackSpeed);
            this.Controls.Add(this.picMap);
            this.Controls.Add(this.ShowMap);
            this.Controls.Add(this.Clear);
            this.Controls.Add(this.Restart);
            this.Controls.Add(this.Start);
            this.Controls.Add(this.lstEvents);
            this.Name = "TimelineForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.Manual;
            this.Text = "Timeline";
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.picMap)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.trackSpeed)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private DFWV.Controls.FlickerFreeListBox lstEvents;
        private System.Windows.Forms.Button Start;
        private System.Windows.Forms.Timer EventTimer;
        private System.Windows.Forms.Button Restart;
        private System.Windows.Forms.CheckBox chkEventCritical;
        private System.Windows.Forms.CheckBox chkEventMajor;
        private System.Windows.Forms.CheckBox chkEventMinor;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.CheckBox chkEventCollectionMinor;
        private System.Windows.Forms.CheckBox chkEventCollectionCritical;
        private System.Windows.Forms.Button Clear;
        private System.Windows.Forms.Button ShowMap;
        private System.Windows.Forms.PictureBox picMap;
        private System.Windows.Forms.TrackBar trackSpeed;
    }
}