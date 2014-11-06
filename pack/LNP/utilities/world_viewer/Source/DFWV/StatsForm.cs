using DFWV.WorldClasses;
using System;
using System.Linq;
using System.Windows.Forms;
using System.Windows.Forms.DataVisualization.Charting;

namespace DFWV
{
    public partial class StatsForm : Form
    {
        private readonly World World;

        internal StatsForm(World world)
        {
            InitializeComponent();
            World = world;

            DisplayStats();
        }

        private void DisplayStats()
        {
            DisplayHFPopulationChart();
            DisplaySiteCountChart();
        }

        private void DisplaySiteCountChart()
        {
            var yValues = World.Stats.SitesInYear.Values.ToArray();
            var xValues = World.Stats.SitesInYear.Keys.ToArray();

            var yAxis = new Axis(SiteCountChart.ChartAreas[0], AxisName.Y)
            {
                IsStartedFromZero = true,
                Title = "Site Count",
                Name = "Site Count"
            };
            var xAxis = new Axis(SiteCountChart.ChartAreas[0], AxisName.X) {Title = "Year"};

            // Bind the data to the chart
            SiteCountChart.Series["Default"].Points.DataBindXY(xValues, yValues);
            SiteCountChart.ChartAreas[0].AxisX.Interval = Math.Round((xValues[xValues.Length - 1] - xValues[0]) / 100.0, 0) * 10.0;
            SiteCountChart.ChartAreas[0].AxisX.IntervalOffset = -xValues[0] %
                SiteCountChart.ChartAreas[0].AxisX.Interval + 1;
        }

        private void DisplayHFPopulationChart()
        {
            var yValues = World.Stats.HFAliveInYear.Values.ToArray();
            var xValues = World.Stats.HFAliveInYear.Keys.ToArray();

            var yAxis = new Axis(HFPopulationChart.ChartAreas[0], AxisName.Y)
            {
                IsStartedFromZero = true,
                Title = "Population",
                Name = "Population"
            };
            var xAxis = new Axis(HFPopulationChart.ChartAreas[0], AxisName.X) {Title = "Year"};

            // Bind the data to the chart
            HFPopulationChart.Series["Default"].Points.DataBindXY(xValues, yValues);
            HFPopulationChart.ChartAreas[0].AxisX.Interval = Math.Round((xValues[xValues.Length - 1] - xValues[0]) / 100.0, 0) * 10.0;
            HFPopulationChart.ChartAreas[0].AxisX.IntervalOffset = -xValues[0] %
                HFPopulationChart.ChartAreas[0].AxisX.Interval + 1;
        }

        private void StatsForm_Load(object sender, EventArgs e)
        {

        }
    }
}
