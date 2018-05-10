namespace _2018_01_23_TestClassFrazione
{
    partial class FormMain
    {
        /// <summary>
        /// Variabile di progettazione necessaria.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Liberare le risorse in uso.
        /// </summary>
        /// <param name="disposing">ha valore true se le risorse gestite devono essere eliminate, false in caso contrario.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Codice generato da Progettazione Windows Form

        /// <summary>
        /// Metodo necessario per il supporto della finestra di progettazione. Non modificare
        /// il contenuto del metodo con l'editor di codice.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.btn_Fine = new System.Windows.Forms.Button();
            this.text_n1 = new System.Windows.Forms.TextBox();
            this.text_d1 = new System.Windows.Forms.TextBox();
            this.text_d2 = new System.Windows.Forms.TextBox();
            this.text_n2 = new System.Windows.Forms.TextBox();
            this.text_dris = new System.Windows.Forms.TextBox();
            this.text_nris = new System.Windows.Forms.TextBox();
            this.cb_op = new System.Windows.Forms.ComboBox();
            this.btn_ugu = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(3, 26);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(75, 17);
            this.label1.TabIndex = 0;
            this.label1.Text = "Frazione 1";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(162, 26);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(75, 17);
            this.label2.TabIndex = 1;
            this.label2.Text = "Frazione 2";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(315, 26);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(63, 17);
            this.label3.TabIndex = 2;
            this.label3.Text = "Risultato";
            // 
            // btn_Fine
            // 
            this.btn_Fine.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Right)));
            this.btn_Fine.Location = new System.Drawing.Point(337, 220);
            this.btn_Fine.Name = "btn_Fine";
            this.btn_Fine.Size = new System.Drawing.Size(75, 30);
            this.btn_Fine.TabIndex = 3;
            this.btn_Fine.Text = "&Fine";
            this.btn_Fine.UseVisualStyleBackColor = true;
            this.btn_Fine.Click += new System.EventHandler(this.btn_Fine_Click);
            // 
            // text_n1
            // 
            this.text_n1.Location = new System.Drawing.Point(6, 55);
            this.text_n1.Name = "text_n1";
            this.text_n1.Size = new System.Drawing.Size(61, 22);
            this.text_n1.TabIndex = 4;
            this.text_n1.Text = "0";
            this.text_n1.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // text_d1
            // 
            this.text_d1.Location = new System.Drawing.Point(6, 104);
            this.text_d1.Name = "text_d1";
            this.text_d1.Size = new System.Drawing.Size(61, 22);
            this.text_d1.TabIndex = 5;
            this.text_d1.Text = "1";
            this.text_d1.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // text_d2
            // 
            this.text_d2.Location = new System.Drawing.Point(165, 104);
            this.text_d2.Name = "text_d2";
            this.text_d2.Size = new System.Drawing.Size(61, 22);
            this.text_d2.TabIndex = 7;
            this.text_d2.Text = "1";
            this.text_d2.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // text_n2
            // 
            this.text_n2.Location = new System.Drawing.Point(165, 55);
            this.text_n2.Name = "text_n2";
            this.text_n2.Size = new System.Drawing.Size(61, 22);
            this.text_n2.TabIndex = 6;
            this.text_n2.Text = "0";
            this.text_n2.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // text_dris
            // 
            this.text_dris.Location = new System.Drawing.Point(318, 104);
            this.text_dris.Name = "text_dris";
            this.text_dris.Size = new System.Drawing.Size(61, 22);
            this.text_dris.TabIndex = 9;
            this.text_dris.Text = "1";
            this.text_dris.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // text_nris
            // 
            this.text_nris.Location = new System.Drawing.Point(318, 55);
            this.text_nris.Name = "text_nris";
            this.text_nris.Size = new System.Drawing.Size(61, 22);
            this.text_nris.TabIndex = 8;
            this.text_nris.Text = "0";
            this.text_nris.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // cb_op
            // 
            this.cb_op.FormattingEnabled = true;
            this.cb_op.Items.AddRange(new object[] {
            " +",
            "  -",
            "  *",
            "  /"});
            this.cb_op.Location = new System.Drawing.Point(94, 78);
            this.cb_op.Name = "cb_op";
            this.cb_op.Size = new System.Drawing.Size(43, 24);
            this.cb_op.TabIndex = 10;
            // 
            // btn_ugu
            // 
            this.btn_ugu.BackColor = System.Drawing.SystemColors.ButtonFace;
            this.btn_ugu.Location = new System.Drawing.Point(259, 78);
            this.btn_ugu.Name = "btn_ugu";
            this.btn_ugu.Size = new System.Drawing.Size(38, 23);
            this.btn_ugu.TabIndex = 11;
            this.btn_ugu.Text = "=";
            this.btn_ugu.UseVisualStyleBackColor = false;
            this.btn_ugu.Click += new System.EventHandler(this.btn_ugu_Click);
            // 
            // FormMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveBorder;
            this.ClientSize = new System.Drawing.Size(422, 255);
            this.Controls.Add(this.btn_ugu);
            this.Controls.Add(this.cb_op);
            this.Controls.Add(this.text_dris);
            this.Controls.Add(this.text_nris);
            this.Controls.Add(this.text_d2);
            this.Controls.Add(this.text_n2);
            this.Controls.Add(this.text_d1);
            this.Controls.Add(this.text_n1);
            this.Controls.Add(this.btn_Fine);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "FormMain";
            this.Text = "Test Frazione";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button btn_Fine;
        private System.Windows.Forms.TextBox text_n1;
        private System.Windows.Forms.TextBox text_d1;
        private System.Windows.Forms.TextBox text_d2;
        private System.Windows.Forms.TextBox text_n2;
        private System.Windows.Forms.TextBox text_dris;
        private System.Windows.Forms.TextBox text_nris;
        private System.Windows.Forms.ComboBox cb_op;
        private System.Windows.Forms.Button btn_ugu;
    }
}

