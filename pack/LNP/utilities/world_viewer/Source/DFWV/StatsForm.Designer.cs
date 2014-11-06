namespace DFWV
{
    partial class StatsForm
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
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea1 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Series series1 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.Windows.Forms.DataVisualization.Charting.Title title1 = new System.Windows.Forms.DataVisualization.Charting.Title();
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea2 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Series series2 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.Windows.Forms.DataVisualization.Charting.Title title2 = new System.Windows.Forms.DataVisualization.Charting.Title();
            this.HFPopulationChart = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.SiteCountChart = new System.Windows.Forms.DataVisualization.Charting.Chart();
            ((System.ComponentModel.ISupportInitialize)(this.HFPopulationChart)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.SiteCountChart)).BeginInit();
            this.SuspendLayout();
            // 
            // HFPopulationChart
            // 
            chartArea1.AxisX.Title = "Year";
            chartArea1.AxisY.Title = "Population";
            chartArea1.Name = "ChartArea1";
            this.HFPopulationChart.ChartAreas.Add(chartArea1);
            this.HFPopulationChart.Location = new System.Drawing.Point(554, 431);
            this.HFPopulationChart.Margin = new System.Windows.Forms.Padding(2);
            this.HFPopulationChart.Name = "HFPopulationChart";
            series1.ChartArea = "ChartArea1";
            series1.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Line;
            series1.Legend = "Legend1";
            series1.Name = "Default";
            this.HFPopulationChart.Series.Add(series1);
            this.HFPopulationChart.Size = new System.Drawing.Size(536, 266);
            this.HFPopulationChart.TabIndex = 3;
            this.HFPopulationChart.Text = "Title";
            title1.Name = "Title1";
            title1.Text = "Historical Figure Population";
            this.HFPopulationChart.Titles.Add(title1);
            // 
            // SiteCountChart
            // 
            chartArea2.AxisX.Title = "Year";
            chartArea2.AxisY.Title = "Site Count";
            chartArea2.Name = "ChartArea1";
            this.SiteCountChart.ChartAreas.Add(chartArea2);
            this.SiteCountChart.Location = new System.Drawing.Point(9, 431);
            this.SiteCountChart.Margin = new System.Windows.Forms.Padding(2);
            this.SiteCountChart.Name = "SiteCountChart";
            series2.ChartArea = "ChartArea1";
            series2.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Line;
            series2.Legend = "Legend1";
            series2.Name = "Default";
            this.SiteCountChart.Series.Add(series2);
            this.SiteCountChart.Size = new System.Drawing.Size(536, 266);
            this.SiteCountChart.TabIndex = 4;
            this.SiteCountChart.Text = "Title";
            title2.Name = "Title1";
            title2.Text = "Site Count";
            this.SiteCountChart.Titles.Add(title2);
            // 
            // StatsForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1099, 708);
            this.Controls.Add(this.SiteCountChart);
            this.Controls.Add(this.HFPopulationChart);
            this.Margin = new System.Windows.Forms.Padding(2);
            this.Name = "StatsForm";
            this.Text = "Stats (In Progress)";
            this.Load += new System.EventHandler(this.StatsForm_Load);
            ((System.ComponentModel.ISupportInitialize)(this.HFPopulationChart)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.SiteCountChart)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.DataVisualization.Charting.Chart HFPopulationChart;
        private System.Windows.Forms.DataVisualization.Charting.Chart SiteCountChart;
    }
}