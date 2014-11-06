using System.Windows.Forms;
using System.Drawing;

namespace DFWV.Controls
{
    /// <summary>
    /// This is a double buffered listbox, to make super fast speed timeline scrolling stop flickering.
    /// </summary>
// (Used in designer)
// ReSharper disable once UnusedMember.Global 
    internal sealed class FlickerFreeListBox : ListBox
    {
        public FlickerFreeListBox()
        {
            SetStyle(
                ControlStyles.OptimizedDoubleBuffer |
                ControlStyles.ResizeRedraw |
                ControlStyles.UserPaint,
                true);
            DrawMode = DrawMode.OwnerDrawFixed;
        }
        protected override void OnDrawItem(DrawItemEventArgs e)
        {
            if (Items.Count > 0)
            {
                e.DrawBackground();
                e.Graphics.DrawString(Items[e.Index].ToString(), e.Font, new SolidBrush(ForeColor), new PointF(e.Bounds.X, e.Bounds.Y));
            }
            base.OnDrawItem(e);
        }
        protected override void OnPaint(PaintEventArgs e)
        {
            var iRegion = new Region(e.ClipRectangle);
            e.Graphics.FillRegion(new SolidBrush(BackColor), iRegion);
            if (Items.Count > 0)
            {
                for (var i = 0; i < Items.Count; ++i)
                {
                    var irect = GetItemRectangle(i);
                    if (!e.ClipRectangle.IntersectsWith(irect)) continue;
                    if ((SelectionMode == SelectionMode.One && SelectedIndex == i)
                        || (SelectionMode == SelectionMode.MultiSimple && SelectedIndices.Contains(i))
                        || (SelectionMode == SelectionMode.MultiExtended && SelectedIndices.Contains(i)))
                    {
                        OnDrawItem(new DrawItemEventArgs(e.Graphics, Font,
                            irect, i,
                            DrawItemState.Selected, ForeColor,
                            BackColor));
                    }
                    else
                    {
                        OnDrawItem(new DrawItemEventArgs(e.Graphics, Font,
                            irect, i,
                            DrawItemState.Default, ForeColor,
                            BackColor));
                    }
                    iRegion.Complement(irect);
                }
            }
            base.OnPaint(e);
        }
    }
}
