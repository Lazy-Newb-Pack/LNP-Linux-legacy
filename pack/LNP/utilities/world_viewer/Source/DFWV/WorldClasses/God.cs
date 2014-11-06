using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using DFWV.Annotations;
using DFWV.WorldClasses.HistoricalFigureClasses;

namespace DFWV.WorldClasses
{
    class God : Person
    {
        public static List<string> Types = new List<string>();
        public int Type { get; set; }
        [UsedImplicitly]
        public string GodType { get { return Types[Type]; } }

        public readonly List<Civilization> Civilizations = new List<Civilization>();
        public readonly List<int> Spheres = new List<int>();
        public readonly List<Leader> Leaders = new List<Leader>();

        public HistoricalFigure HF { get; set; }

        [UsedImplicitly]
        public string RaceName { get { return HF != null && HF.Race != null ? HF.Race.Name : ""; } }

        [UsedImplicitly]
        public int CivilizationCount { get { return Civilizations == null ? 0 : Civilizations.Count; } }
        [UsedImplicitly]
        public int SphereCount { get { return Spheres == null ? 0 : Spheres.Count; } }
        [UsedImplicitly]
        public int LeaderCount { get { return Leaders == null ? 0 : Leaders.Count; } }

        public God(string data)
        {
            if (data.Contains(':'))
            {
                //  Erib Oiledrock the Mountain of Gravel, deity: metals
                var spherenames = data.Split(':').Last().Trim().Split(',').ToList();

                foreach (var spherename in spherenames)
                {
                    if (!HistoricalFigure.Spheres.Contains(spherename))
                        HistoricalFigure.Spheres.Add(spherename);

                    Spheres.Add(HistoricalFigure.Spheres.IndexOf(spherename));
                }

                Name = data.Split(':')[0].Split(',')[0].Trim();
                var valType = data.Split(':')[0].Split(',')[1].Trim();

                if (!Types.Contains(valType))
                    Types.Add(valType);
                Type = Types.IndexOf(valType);

            }
            else
                Name = data;

        }
        
        public override string ToString()
        {
            return Name;
        }

        public override void Select(MainForm frm)
        {
            frm.grpGod.Text = ToString();
            frm.grpGod.Show();

            frm.lblGodName.Text = ToString();
            frm.lblGodType.Text = CultureInfo.CurrentCulture.TextInfo.ToTitleCase(Types[Type]);
            frm.lblGodHF.Data = HF;

            
            frm.lblGodSpheres.Text = CultureInfo.CurrentCulture.TextInfo.ToTitleCase(
                String.Join(", ", Spheres.Select(sphere => HistoricalFigure.Spheres[sphere]).ToList())
                );

            frm.grpGodLeaders.Visible = Leaders.Count > 0;
            if (Leaders != null)
            {
                frm.lstGodLeaders.Items.Clear();
                foreach (var leader in Leaders)
                {
                    frm.lstGodLeaders.Items.Add(leader);
                }
            }

            frm.grpGodCivilizations.Visible = Civilizations.Count > 0;
            if (Civilizations != null)
            {
                frm.lstGodCivilizations.Items.Clear();
                foreach (var civ in Civilizations)
                {
                    frm.lstGodCivilizations.Items.Add(civ);
                }
            }

            Program.MakeSelected(frm.tabGod, frm.lstGod, this);
        }

    }
}
