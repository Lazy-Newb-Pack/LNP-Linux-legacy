using System;
using System.Drawing;
using System.Windows.Forms;
using DFWV.WorldClasses;

namespace DFWV.Controls
{

    /// <summary>
    /// The Link Label is an extended label that allows easy navigation between various WorldObjects.  
    /// In addition to it's text it stores a data field which is the World Object that should be linked to.
    /// </summary>
    public class LinkLabel : Label
    {
        private WorldObject data;
        
        public WorldObject Data
        {
            set 
            { 
                data = value;
                if (data != null)
                {
                    ForeColor = Color.Blue;
                    Text = data.ToString();
                }
                else
                { 
                    ForeColor = Color.Black;
                    Text = "";
                }
            }
            get { return data; }
        }

        protected override void OnClick(EventArgs e)
        {
            Cursor.Current = Cursors.Default;
            Font = new Font(Font.Name, Font.Size, FontStyle.Regular);
            if (data != null)
                data.Select((MainForm)FindForm());

            base.OnClick(e);
        }

        protected override void OnMouseEnter(EventArgs e)
        {
            if (data != null)
            {
                Cursor.Current = Cursors.Hand;
                Font = new Font(Font.Name, Font.Size, FontStyle.Underline);
            }
            base.OnMouseEnter(e);
        }

        protected override void OnMouseMove(MouseEventArgs e)
        {
            if (data != null)
                Cursor.Current = Cursors.Hand;
            base.OnMouseMove(e);
        }

        protected override void OnMouseDown(MouseEventArgs e)
        {
            if (data != null)
                Cursor.Current = Cursors.Hand;
            base.OnMouseDown(e);
        }
        protected override void  OnMouseLeave(EventArgs e)
        {
            if (data != null)
            {
                Cursor.Current = Cursors.Default;
                Font = new Font(Font.Name, Font.Size, FontStyle.Regular);
            }
 	        base.OnMouseLeave(e);
        }
    }
}
