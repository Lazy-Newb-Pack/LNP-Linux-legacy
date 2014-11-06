namespace DFWV
{
    partial class FilterForm
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
            this.Apply = new System.Windows.Forms.Button();
            this.Cancel = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.WhereAdd = new System.Windows.Forms.Button();
            this.WhereDelete = new System.Windows.Forms.Button();
            this.cmbWhereOperation = new System.Windows.Forms.ComboBox();
            this.txtWhereData = new System.Windows.Forms.TextBox();
            this.cmbWhereField = new System.Windows.Forms.ComboBox();
            this.lstWhere = new System.Windows.Forms.ListBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.chkDescending = new System.Windows.Forms.CheckBox();
            this.OrderAdd = new System.Windows.Forms.Button();
            this.OrderDelete = new System.Windows.Forms.Button();
            this.OrderMoveDown = new System.Windows.Forms.Button();
            this.OrderMoveUp = new System.Windows.Forms.Button();
            this.cmbOrderOperation = new System.Windows.Forms.ComboBox();
            this.txtOrderData = new System.Windows.Forms.TextBox();
            this.cmbOrderField = new System.Windows.Forms.ComboBox();
            this.lstOrder = new System.Windows.Forms.ListBox();
            this.txtTake = new System.Windows.Forms.TextBox();
            this.chkTake = new System.Windows.Forms.CheckBox();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.GroupAdd = new System.Windows.Forms.Button();
            this.GroupDelete = new System.Windows.Forms.Button();
            this.GroupMoveDown = new System.Windows.Forms.Button();
            this.GroupMoveUp = new System.Windows.Forms.Button();
            this.cmbGroupField = new System.Windows.Forms.ComboBox();
            this.lstGroup = new System.Windows.Forms.ListBox();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.SuspendLayout();
            // 
            // Apply
            // 
            this.Apply.DialogResult = System.Windows.Forms.DialogResult.OK;
            this.Apply.Location = new System.Drawing.Point(12, 12);
            this.Apply.Name = "Apply";
            this.Apply.Size = new System.Drawing.Size(75, 23);
            this.Apply.TabIndex = 0;
            this.Apply.Text = "Apply";
            this.Apply.UseVisualStyleBackColor = true;
            this.Apply.Click += new System.EventHandler(this.Apply_Click);
            // 
            // Cancel
            // 
            this.Cancel.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.Cancel.Location = new System.Drawing.Point(657, 10);
            this.Cancel.Name = "Cancel";
            this.Cancel.Size = new System.Drawing.Size(75, 23);
            this.Cancel.TabIndex = 1;
            this.Cancel.Text = "Cancel";
            this.Cancel.UseVisualStyleBackColor = true;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.WhereAdd);
            this.groupBox1.Controls.Add(this.WhereDelete);
            this.groupBox1.Controls.Add(this.cmbWhereOperation);
            this.groupBox1.Controls.Add(this.txtWhereData);
            this.groupBox1.Controls.Add(this.cmbWhereField);
            this.groupBox1.Controls.Add(this.lstWhere);
            this.groupBox1.Location = new System.Drawing.Point(12, 42);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(226, 208);
            this.groupBox1.TabIndex = 2;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Filter On";
            // 
            // WhereAdd
            // 
            this.WhereAdd.Location = new System.Drawing.Point(182, 71);
            this.WhereAdd.Name = "WhereAdd";
            this.WhereAdd.Size = new System.Drawing.Size(38, 23);
            this.WhereAdd.TabIndex = 13;
            this.WhereAdd.Text = "Add";
            this.WhereAdd.UseVisualStyleBackColor = true;
            this.WhereAdd.Click += new System.EventHandler(this.WhereAdd_Click);
            // 
            // WhereDelete
            // 
            this.WhereDelete.Location = new System.Drawing.Point(182, 137);
            this.WhereDelete.Name = "WhereDelete";
            this.WhereDelete.Size = new System.Drawing.Size(38, 23);
            this.WhereDelete.TabIndex = 12;
            this.WhereDelete.Text = "Del";
            this.WhereDelete.UseVisualStyleBackColor = true;
            this.WhereDelete.Click += new System.EventHandler(this.WhereDelete_Click);
            // 
            // cmbWhereOperation
            // 
            this.cmbWhereOperation.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cmbWhereOperation.FormattingEnabled = true;
            this.cmbWhereOperation.Location = new System.Drawing.Point(7, 47);
            this.cmbWhereOperation.Name = "cmbWhereOperation";
            this.cmbWhereOperation.Size = new System.Drawing.Size(121, 21);
            this.cmbWhereOperation.TabIndex = 3;
            // 
            // txtWhereData
            // 
            this.txtWhereData.Location = new System.Drawing.Point(7, 74);
            this.txtWhereData.Name = "txtWhereData";
            this.txtWhereData.Size = new System.Drawing.Size(100, 20);
            this.txtWhereData.TabIndex = 2;
            // 
            // cmbWhereField
            // 
            this.cmbWhereField.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cmbWhereField.FormattingEnabled = true;
            this.cmbWhereField.Location = new System.Drawing.Point(7, 20);
            this.cmbWhereField.Name = "cmbWhereField";
            this.cmbWhereField.Size = new System.Drawing.Size(121, 21);
            this.cmbWhereField.TabIndex = 1;
            this.cmbWhereField.SelectedIndexChanged += new System.EventHandler(this.cmbWhereField_SelectedIndexChanged);
            // 
            // lstWhere
            // 
            this.lstWhere.FormattingEnabled = true;
            this.lstWhere.Location = new System.Drawing.Point(7, 103);
            this.lstWhere.Name = "lstWhere";
            this.lstWhere.Size = new System.Drawing.Size(164, 95);
            this.lstWhere.TabIndex = 0;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.chkDescending);
            this.groupBox2.Controls.Add(this.OrderAdd);
            this.groupBox2.Controls.Add(this.OrderDelete);
            this.groupBox2.Controls.Add(this.OrderMoveDown);
            this.groupBox2.Controls.Add(this.OrderMoveUp);
            this.groupBox2.Controls.Add(this.cmbOrderOperation);
            this.groupBox2.Controls.Add(this.txtOrderData);
            this.groupBox2.Controls.Add(this.cmbOrderField);
            this.groupBox2.Controls.Add(this.lstOrder);
            this.groupBox2.Location = new System.Drawing.Point(244, 41);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(241, 208);
            this.groupBox2.TabIndex = 3;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Order By";
            // 
            // chkDescending
            // 
            this.chkDescending.AutoSize = true;
            this.chkDescending.Location = new System.Drawing.Point(111, 78);
            this.chkDescending.Margin = new System.Windows.Forms.Padding(2);
            this.chkDescending.Name = "chkDescending";
            this.chkDescending.Size = new System.Drawing.Size(83, 17);
            this.chkDescending.TabIndex = 12;
            this.chkDescending.Text = "Descending";
            this.chkDescending.UseVisualStyleBackColor = true;
            // 
            // OrderAdd
            // 
            this.OrderAdd.Location = new System.Drawing.Point(197, 72);
            this.OrderAdd.Name = "OrderAdd";
            this.OrderAdd.Size = new System.Drawing.Size(38, 23);
            this.OrderAdd.TabIndex = 11;
            this.OrderAdd.Text = "Add";
            this.OrderAdd.UseVisualStyleBackColor = true;
            this.OrderAdd.Click += new System.EventHandler(this.OrderAdd_Click);
            // 
            // OrderDelete
            // 
            this.OrderDelete.Location = new System.Drawing.Point(197, 138);
            this.OrderDelete.Name = "OrderDelete";
            this.OrderDelete.Size = new System.Drawing.Size(38, 23);
            this.OrderDelete.TabIndex = 8;
            this.OrderDelete.Text = "Del";
            this.OrderDelete.UseVisualStyleBackColor = true;
            this.OrderDelete.Click += new System.EventHandler(this.OrderDelete_Click);
            // 
            // OrderMoveDown
            // 
            this.OrderMoveDown.Font = new System.Drawing.Font("Arial Narrow", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.OrderMoveDown.Location = new System.Drawing.Point(203, 164);
            this.OrderMoveDown.Name = "OrderMoveDown";
            this.OrderMoveDown.Size = new System.Drawing.Size(24, 33);
            this.OrderMoveDown.TabIndex = 7;
            this.OrderMoveDown.Text = "↓";
            this.OrderMoveDown.UseVisualStyleBackColor = true;
            this.OrderMoveDown.Click += new System.EventHandler(this.OrderMoveDown_Click);
            // 
            // OrderMoveUp
            // 
            this.OrderMoveUp.Font = new System.Drawing.Font("Arial Narrow", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.OrderMoveUp.Location = new System.Drawing.Point(203, 104);
            this.OrderMoveUp.Name = "OrderMoveUp";
            this.OrderMoveUp.Size = new System.Drawing.Size(24, 33);
            this.OrderMoveUp.TabIndex = 6;
            this.OrderMoveUp.Text = "↑";
            this.OrderMoveUp.TextAlign = System.Drawing.ContentAlignment.TopCenter;
            this.OrderMoveUp.UseVisualStyleBackColor = true;
            this.OrderMoveUp.Click += new System.EventHandler(this.OrderMoveUp_Click);
            // 
            // cmbOrderOperation
            // 
            this.cmbOrderOperation.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cmbOrderOperation.FormattingEnabled = true;
            this.cmbOrderOperation.Location = new System.Drawing.Point(6, 48);
            this.cmbOrderOperation.Name = "cmbOrderOperation";
            this.cmbOrderOperation.Size = new System.Drawing.Size(121, 21);
            this.cmbOrderOperation.TabIndex = 5;
            // 
            // txtOrderData
            // 
            this.txtOrderData.Location = new System.Drawing.Point(6, 75);
            this.txtOrderData.Name = "txtOrderData";
            this.txtOrderData.Size = new System.Drawing.Size(100, 20);
            this.txtOrderData.TabIndex = 4;
            // 
            // cmbOrderField
            // 
            this.cmbOrderField.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cmbOrderField.FormattingEnabled = true;
            this.cmbOrderField.Location = new System.Drawing.Point(6, 21);
            this.cmbOrderField.Name = "cmbOrderField";
            this.cmbOrderField.Size = new System.Drawing.Size(121, 21);
            this.cmbOrderField.TabIndex = 2;
            this.cmbOrderField.SelectedIndexChanged += new System.EventHandler(this.cmbOrderField_SelectedIndexChanged);
            // 
            // lstOrder
            // 
            this.lstOrder.FormattingEnabled = true;
            this.lstOrder.Location = new System.Drawing.Point(6, 104);
            this.lstOrder.Name = "lstOrder";
            this.lstOrder.Size = new System.Drawing.Size(185, 95);
            this.lstOrder.TabIndex = 1;
            // 
            // txtTake
            // 
            this.txtTake.Enabled = false;
            this.txtTake.Location = new System.Drawing.Point(329, 10);
            this.txtTake.Name = "txtTake";
            this.txtTake.Size = new System.Drawing.Size(100, 20);
            this.txtTake.TabIndex = 4;
            // 
            // chkTake
            // 
            this.chkTake.AutoSize = true;
            this.chkTake.Location = new System.Drawing.Point(250, 12);
            this.chkTake.Name = "chkTake";
            this.chkTake.Size = new System.Drawing.Size(73, 17);
            this.chkTake.TabIndex = 5;
            this.chkTake.Text = "Take First";
            this.chkTake.UseVisualStyleBackColor = true;
            this.chkTake.CheckedChanged += new System.EventHandler(this.chkTake_CheckedChanged);
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.GroupAdd);
            this.groupBox3.Controls.Add(this.GroupDelete);
            this.groupBox3.Controls.Add(this.GroupMoveDown);
            this.groupBox3.Controls.Add(this.GroupMoveUp);
            this.groupBox3.Controls.Add(this.cmbGroupField);
            this.groupBox3.Controls.Add(this.lstGroup);
            this.groupBox3.Location = new System.Drawing.Point(491, 42);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(241, 208);
            this.groupBox3.TabIndex = 13;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "Group By";
            // 
            // GroupAdd
            // 
            this.GroupAdd.Location = new System.Drawing.Point(197, 72);
            this.GroupAdd.Name = "GroupAdd";
            this.GroupAdd.Size = new System.Drawing.Size(38, 23);
            this.GroupAdd.TabIndex = 11;
            this.GroupAdd.Text = "Add";
            this.GroupAdd.UseVisualStyleBackColor = true;
            this.GroupAdd.Click += new System.EventHandler(this.GroupAdd_Click);
            // 
            // GroupDelete
            // 
            this.GroupDelete.Location = new System.Drawing.Point(197, 138);
            this.GroupDelete.Name = "GroupDelete";
            this.GroupDelete.Size = new System.Drawing.Size(38, 23);
            this.GroupDelete.TabIndex = 8;
            this.GroupDelete.Text = "Del";
            this.GroupDelete.UseVisualStyleBackColor = true;
            this.GroupDelete.Click += new System.EventHandler(this.GroupDelete_Click);
            // 
            // GroupMoveDown
            // 
            this.GroupMoveDown.Font = new System.Drawing.Font("Arial Narrow", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.GroupMoveDown.Location = new System.Drawing.Point(203, 164);
            this.GroupMoveDown.Name = "GroupMoveDown";
            this.GroupMoveDown.Size = new System.Drawing.Size(24, 33);
            this.GroupMoveDown.TabIndex = 7;
            this.GroupMoveDown.Text = "↓";
            this.GroupMoveDown.UseVisualStyleBackColor = true;
            this.GroupMoveDown.Click += new System.EventHandler(this.GroupMoveDown_Click);
            // 
            // GroupMoveUp
            // 
            this.GroupMoveUp.Font = new System.Drawing.Font("Arial Narrow", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.GroupMoveUp.Location = new System.Drawing.Point(203, 104);
            this.GroupMoveUp.Name = "GroupMoveUp";
            this.GroupMoveUp.Size = new System.Drawing.Size(24, 33);
            this.GroupMoveUp.TabIndex = 6;
            this.GroupMoveUp.Text = "↑";
            this.GroupMoveUp.TextAlign = System.Drawing.ContentAlignment.TopCenter;
            this.GroupMoveUp.UseVisualStyleBackColor = true;
            this.GroupMoveUp.Click += new System.EventHandler(this.GroupMoveUp_Click);
            // 
            // cmbGroupField
            // 
            this.cmbGroupField.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cmbGroupField.FormattingEnabled = true;
            this.cmbGroupField.Location = new System.Drawing.Point(6, 21);
            this.cmbGroupField.Name = "cmbGroupField";
            this.cmbGroupField.Size = new System.Drawing.Size(121, 21);
            this.cmbGroupField.TabIndex = 2;
            // 
            // lstGroup
            // 
            this.lstGroup.FormattingEnabled = true;
            this.lstGroup.Location = new System.Drawing.Point(6, 104);
            this.lstGroup.Name = "lstGroup";
            this.lstGroup.Size = new System.Drawing.Size(185, 95);
            this.lstGroup.TabIndex = 1;
            // 
            // FilterForm
            // 
            this.AcceptButton = this.Apply;
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoSize = true;
            this.CancelButton = this.Cancel;
            this.ClientSize = new System.Drawing.Size(745, 261);
            this.ControlBox = false;
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.chkTake);
            this.Controls.Add(this.txtTake);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.Cancel);
            this.Controls.Add(this.Apply);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedToolWindow;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "FilterForm";
            this.ShowIcon = false;
            this.ShowInTaskbar = false;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterParent;
            this.Text = "Filter";
            this.TopMost = true;
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.groupBox3.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button Apply;
        private System.Windows.Forms.Button Cancel;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.TextBox txtTake;
        private System.Windows.Forms.CheckBox chkTake;
        private System.Windows.Forms.ComboBox cmbWhereOperation;
        private System.Windows.Forms.TextBox txtWhereData;
        private System.Windows.Forms.ComboBox cmbWhereField;
        private System.Windows.Forms.ListBox lstWhere;
        private System.Windows.Forms.ComboBox cmbOrderOperation;
        private System.Windows.Forms.TextBox txtOrderData;
        private System.Windows.Forms.ComboBox cmbOrderField;
        private System.Windows.Forms.ListBox lstOrder;
        private System.Windows.Forms.Button WhereAdd;
        private System.Windows.Forms.Button WhereDelete;
        private System.Windows.Forms.Button OrderAdd;
        private System.Windows.Forms.Button OrderDelete;
        private System.Windows.Forms.Button OrderMoveDown;
        private System.Windows.Forms.Button OrderMoveUp;
        private System.Windows.Forms.CheckBox chkDescending;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.Button GroupAdd;
        private System.Windows.Forms.Button GroupDelete;
        private System.Windows.Forms.Button GroupMoveDown;
        private System.Windows.Forms.Button GroupMoveUp;
        private System.Windows.Forms.ComboBox cmbGroupField;
        private System.Windows.Forms.ListBox lstGroup;
    }
}