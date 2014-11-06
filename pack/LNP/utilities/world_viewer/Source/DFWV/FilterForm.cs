using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;
using DFWV.WorldClasses;
using DFWV.WorldClasses.HistoricalEventClasses;
using DFWV.WorldClasses.HistoricalEventCollectionClasses;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV
{
    internal partial class FilterForm : Form
    {
        readonly Dictionary<string, Type> Fields = new Dictionary<string, Type>();
        readonly Dictionary<string, IEnumerable<string>> Options = new Dictionary<string, IEnumerable<string>>();

        readonly string[] Ops = { "=", "!=", ">", "<", ">=", "<=", "Contains", "Doesn't Contain", "true", "false" };

        readonly string[] intOps = { "=", "!=", ">", "<", ">=", "<="};
        readonly string[] stringOps = { "=", "!=", ">", "<", ">=", "<=", "Contains", "Doesn't Contain"};
        readonly string[] boolOps = { "true", "false" };
        // string[] listOps = { "=", "!=" };

        public Filter outFilter;


        public FilterForm(World world, Type filterType)
        {

#if DEBUG
            TestAllFilters(world);
#endif

            InitializeComponent();


            cmbWhereOperation.Items.AddRange(Ops.ToArray<object>());
            cmbOrderOperation.Items.AddRange(Ops.ToArray<object>());

            Fields = world.Filters.Fields[filterType];
            cmbWhereField.Items.AddRange(Fields.Keys.ToArray<object>());
            cmbOrderField.Items.AddRange(Fields.Keys.ToArray<object>());

            if (world.Filters.Options.ContainsKey(filterType))
            {
                Options = world.Filters.Options[filterType];

                cmbWhereField.Items.AddRange(Options.Keys.ToArray<object>());
                cmbOrderField.Items.AddRange(Options.Keys.ToArray<object>());

                cmbGroupField.Items.AddRange(Options.Keys.ToArray<object>());
            }
            else
            {
                Options = null;
            }

            lstWhere.Items.AddRange(world.Filters[filterType].Where.ToArray<object>());
            lstOrder.Items.AddRange(world.Filters[filterType].OrderBy.ToArray<object>());
            lstGroup.Items.AddRange(world.Filters[filterType].GroupBy.ToArray<object>());

            chkTake.Checked = world.Filters[filterType].Take != -1;
            txtTake.Text = world.Filters[filterType].Take != -1 ? world.Filters[filterType].Take.ToString() : "";
        }

        private void TestAllFilters(World world)
        {
 	        FilterSettings testSettings = new FilterSettings(world);
            foreach (var thisType in testSettings.Fields.Keys)
            {

                Filter testFilter = new Filter();


                foreach (var filterItem in testSettings.Fields[thisType])
                {
                    if (filterItem.Value == typeof(int))
                        testFilter.Where.Add(filterItem.Key + " == 0");
                    else if (filterItem.Value == typeof(bool))
                        testFilter.Where.Add(filterItem.Key + " == true");
                    else if (filterItem.Value == typeof(string))
                        testFilter.Where.Add(filterItem.Key + " == \"test\"");
                }

                if (testSettings.Options.ContainsKey(thisType))
                {
                    foreach (var filterItem in testSettings.Options[thisType])
                    {
                        testFilter.Where.Add(filterItem.Key + " == \"" + filterItem.Value.ToList()[0] + "\"");
                    }
                }

                if (thisType == typeof(Civilization))
                    testFilter.Get(world.Civilizations).ToArray<object>();
                else if (thisType == typeof(God))
                    testFilter.Get(world.Gods).ToArray<object>();
                else if (thisType == typeof(Leader))
                    testFilter.Get(world.Leaders).ToArray<object>();
                else if (thisType == typeof(Parameter))
                    testFilter.Get(world.Parameters).ToArray<object>();
                else if (thisType == typeof(Race))
                    testFilter.Get(world.Races.Values.ToList()).ToArray<object>();
                else if (thisType == typeof(Artifact))
                    testFilter.Get(world.Artifacts.Values.ToList()).ToArray<object>();
                else if (thisType == typeof(Entity))
                    testFilter.Get(world.Entities.Values.ToList()).ToArray<object>();
                else if (thisType == typeof(EntityPopulation))
                    testFilter.Get(world.EntityPopulations.Values.ToList()).ToArray<object>();
                else if (thisType == typeof(HistoricalEra))
                    testFilter.Get(world.HistoricalEras.Values.ToList()).ToArray<object>();
                else if (thisType == typeof(HistoricalEvent))
                    testFilter.Get(world.HistoricalEvents.Values.ToList()).ToArray<object>();
                else if (thisType == typeof(HistoricalEventCollection))
                    testFilter.Get(world.HistoricalEventCollections.Values.ToList()).ToArray<object>();
                else if (thisType == typeof(HistoricalFigure))
                    testFilter.Get(world.HistoricalFigures.Values.ToList()).ToArray<object>();
                else if (thisType == typeof(WorldClasses.Region))
                    testFilter.Get(world.Regions.Values.ToList()).ToArray<object>();
                else if (thisType == typeof(UndergroundRegion))
                    testFilter.Get(world.UndergroundRegions.Values.ToList()).ToArray<object>();
                else if (thisType == typeof(Site))
                    testFilter.Get(world.Sites.Values.ToList()).ToArray<object>();

            }

        }


        private void chkTake_CheckedChanged(object sender, EventArgs e)
        {
            txtTake.Enabled = chkTake.Checked;
        }

        private void cmbWhereField_SelectedIndexChanged(object sender, EventArgs e)
        {
            var selected = ((ComboBox)sender).SelectedItem.ToString();
            cmbWhereOperation.Items.Clear();
            if (Fields.ContainsKey(selected))
            {
                if (Fields[selected] == typeof(bool))
                {
                    cmbWhereOperation.Items.AddRange(boolOps.ToArray<object>());
                    cmbWhereOperation.SelectedIndex = 0;
                    txtWhereData.Visible = false;
                }
                else if (Fields[selected] == typeof(int))
                {
                    cmbWhereOperation.Items.AddRange(intOps.ToArray<object>());
                    txtWhereData.Visible = true;
                }
                else if (Fields[selected] == typeof(string))
                {
                    cmbWhereOperation.Items.AddRange(stringOps.ToArray<object>());
                    txtWhereData.Visible = true;
                }
                
            }
            else
            {
                var addRange = Options[selected].ToList();
                addRange.Sort();                
                cmbWhereOperation.Items.AddRange(addRange.ToArray<object>());
                txtWhereData.Visible = false;
            }
            txtWhereData.Text = "";
        }

        private void WhereAdd_Click(object sender, EventArgs e)
        {
            if (cmbWhereOperation.SelectedIndex == -1 ||
                cmbWhereField.SelectedIndex == -1)
            {
                WhereAdd.BackColor = Color.Red;
                return;
            }
            var selected = cmbWhereField.SelectedItem.ToString();
            var thisOp = cmbWhereOperation.SelectedItem.ToString();
            var DataInt = 0;
            var Data = "";

            if (Fields.ContainsKey(selected))
            {
                if (Fields[selected] == typeof(int))
                {
                    if (txtWhereData.Text == "")
                    {
                        WhereAdd.BackColor = Color.Red;
                        return;
                    }
                    if (!Int32.TryParse(txtWhereData.Text, out DataInt))
                    {
                        WhereAdd.BackColor = Color.Red;
                        return;
                    }
                }
                else if (Fields[selected] == typeof(string))
                {
                    if (thisOp.Contains("Contain") && txtWhereData.Text == "")
                    {
                        WhereAdd.BackColor = Color.Red;
                        return;
                    }
                    Data = txtWhereData.Text;
                }
            }
            var AddWhere = "";

            if (Fields.ContainsKey(selected))
            {
                if (Fields[selected] == typeof(int))
                    AddWhere = selected + " " + thisOp + DataInt;
                else if (Fields[selected] == typeof(bool))
                    AddWhere = (thisOp == "true" ? "" : "!") + selected;
                else if (Fields[selected] == typeof(string))
                {
                    switch (thisOp)
                    {
                        case "Contains":
                            AddWhere = selected + ".Contains(\"" + Data + "\")";
                            break;
                        case "Doesn't Contain":
                            AddWhere = "!" + selected + ".Contains(\"" + Data + "\")";
                            break;
                        default:
                            AddWhere = selected + " " + thisOp + " \"" + Data + "\"";
                            break;
                    }
                }
            }
            else
            {
                AddWhere = selected + " = \"" + thisOp + "\"";
            }
            if (lstWhere.Items.Contains(AddWhere) || AddWhere == "")
            {
                WhereAdd.BackColor = Color.Red;
                return;
            }
            lstWhere.Items.Add(AddWhere);
            WhereAdd.BackColor = DefaultBackColor;
        }

        private void WhereDelete_Click(object sender, EventArgs e)
        {
            if (lstWhere.SelectedItem != null)
                lstWhere.Items.Remove(lstWhere.SelectedItem);
        }

        private void OrderDelete_Click(object sender, EventArgs e)
        {
            if (lstOrder.SelectedItem != null)
                lstOrder.Items.Remove(lstOrder.SelectedItem);
        }

        private void OrderAdd_Click(object sender, EventArgs e)
        {
            if (cmbOrderField.SelectedIndex == -1)
            {
                OrderAdd.BackColor = Color.Red;
                return;
            }
            var selected = cmbOrderField.SelectedItem.ToString();
            var thisOp = cmbOrderOperation.SelectedItem == null ? null : cmbOrderOperation.SelectedItem.ToString();
            var DataInt = 0;
            var Data = "";

            if (Fields.ContainsKey(selected))
            {
                if (Fields[selected] == typeof (int))
                {
                    if (txtOrderData.Text == "" && cmbOrderOperation.SelectedIndex != -1)
                    {
                        OrderAdd.BackColor = Color.Red;
                        return;
                    }
                    if (!Int32.TryParse(txtOrderData.Text, out DataInt) && cmbOrderOperation.SelectedIndex != -1)
                    {
                        OrderAdd.BackColor = Color.Red;
                        return;
                    }
                }
                else if (Fields[selected] == typeof (string))
                {
                    if (thisOp != null && thisOp.Contains("Contain") && txtOrderData.Text == "")
                    {
                        OrderAdd.BackColor = Color.Red;
                        return;
                    }
                    Data = txtOrderData.Text;
                }
            }
            var AddOrder = "";

            if (thisOp == null)
               AddOrder = selected;
            else
            {
                if (Fields.ContainsKey(selected))
                {
                    if (Fields[selected] == typeof (int))
                        AddOrder = selected + " " + thisOp + DataInt;
                    else if (Fields[selected] == typeof (bool))
                        AddOrder = (thisOp == "true" ? "" : "!") + selected;
                    else if (Fields[selected] == typeof (string))
                    {
                        switch (thisOp)
                        {
                            case "Contains":
                                AddOrder = selected + ".Contains(\"" + Data + "\")";
                                break;
                            case "Doesn't Contain":
                                AddOrder = "!" + selected + ".Contains(\"" + Data + "\")";
                                break;
                            default:
                                AddOrder = selected + " " + thisOp + " \"" + Data + "\"";
                                break;
                        }
                    }
                }
                else
                {
                    AddOrder = selected + " = \"" + thisOp + "\"";
                }
            }
            if (AddOrder != "" && chkDescending.Checked)
                AddOrder = "-" + AddOrder;

            if (lstOrder.Items.Contains(AddOrder) || AddOrder == "")
            {
                OrderAdd.BackColor = Color.Red;
                return;
            }
            lstOrder.Items.Add(AddOrder);
            OrderAdd.BackColor = DefaultBackColor;
        }

        private void cmbOrderField_SelectedIndexChanged(object sender, EventArgs e)
        {
            var selected = ((ComboBox)sender).SelectedItem.ToString();
            cmbOrderOperation.Items.Clear();
            if (Fields.ContainsKey(selected))
            {
                if (Fields[selected] == typeof (bool))
                {
                    cmbOrderOperation.Items.AddRange(boolOps.ToArray<object>());
                    txtOrderData.Visible = false;
                }
                else if (Fields[selected] == typeof (int))
                {
                    cmbOrderOperation.Items.AddRange(intOps.ToArray<object>());
                    txtOrderData.Visible = true;
                }
                else if (Fields[selected] == typeof (string))
                {
                    cmbOrderOperation.Items.AddRange(stringOps.ToArray<object>());
                    txtOrderData.Visible = true;
                }
            }
            else
            {
                var addRange = Options[selected].ToList();
                addRange.Sort();
                cmbOrderOperation.Items.AddRange(addRange.ToArray<object>());
                txtOrderData.Visible = false;
            }
            txtOrderData.Text = "";
        }

        private void OrderMoveUp_Click(object sender, EventArgs e)
        {
            if (lstOrder.SelectedItem == null || lstOrder.SelectedIndex == 0) return;
            var CurIndex = lstOrder.SelectedIndex;
            var curItem = lstOrder.SelectedItem.ToString();
            lstOrder.Items.Remove(lstOrder.SelectedItem);
            lstOrder.Items.Insert(CurIndex-1,curItem);
            lstOrder.SelectedItem = curItem;
        }

        private void OrderMoveDown_Click(object sender, EventArgs e)
        {
            if (lstOrder.SelectedItem == null || lstOrder.SelectedIndex == lstOrder.Items.Count - 1) return;
            var CurIndex = lstOrder.SelectedIndex;
            var curItem = lstOrder.SelectedItem.ToString();
            lstOrder.Items.Remove(lstOrder.SelectedItem);
            lstOrder.Items.Insert(CurIndex + 1, curItem);
            lstOrder.SelectedItem = curItem;
        }

        private void Apply_Click(object sender, EventArgs e)
        {
            List<string> Wheres = null;
            List<string> Orders = null;
            List<string> Groups = null;

            if (lstWhere.Items.Count > 0)
                Wheres = lstWhere.Items.Cast<string>().ToList();
            if (lstOrder.Items.Count > 0)
                Orders = lstOrder.Items.Cast<string>().ToList();
            if (lstGroup.Items.Count > 0)
                Groups = lstGroup.Items.Cast<string>().ToList();

            int TakeI;
            if (!(chkTake.Checked && Int32.TryParse(txtTake.Text,out TakeI)))
                TakeI = -1;

            outFilter = new Filter(Orders, Wheres, Groups, TakeI);
        }

        private void GroupAdd_Click(object sender, EventArgs e)
        {
            if (cmbGroupField.SelectedIndex == -1)
            {
                GroupAdd.BackColor = Color.Red;
                return;
            }
            var AddGroup = cmbGroupField.SelectedItem.ToString();

            if (lstGroup.Items.Contains(AddGroup) || AddGroup == "")
            {
                GroupAdd.BackColor = Color.Red;
                return;
            }
            lstGroup.Items.Add(AddGroup);
            GroupAdd.BackColor = DefaultBackColor;
        }

        private void GroupMoveUp_Click(object sender, EventArgs e)
        {
            if (lstGroup.SelectedItem == null || lstGroup.SelectedIndex == 0) return;
            var CurIndex = lstGroup.SelectedIndex;
            var curItem = lstGroup.SelectedItem.ToString();
            lstGroup.Items.Remove(lstGroup.SelectedItem);
            lstGroup.Items.Insert(CurIndex - 1, curItem);
            lstGroup.SelectedItem = curItem;
        }

        private void GroupMoveDown_Click(object sender, EventArgs e)
        {
            if (lstGroup.SelectedItem == null || lstGroup.SelectedIndex == lstGroup.Items.Count - 1) return;
            var CurIndex = lstGroup.SelectedIndex;
            var curItem = lstGroup.SelectedItem.ToString();
            lstGroup.Items.Remove(lstGroup.SelectedItem);
            lstGroup.Items.Insert(CurIndex + 1, curItem);
            lstGroup.SelectedItem = curItem;
        }

        private void GroupDelete_Click(object sender, EventArgs e)
        {
            if (lstGroup.SelectedItem != null)
                lstGroup.Items.Remove(lstGroup.SelectedItem);
        }
    }
}
