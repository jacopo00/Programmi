namespace _2018_03_03_Test_control
{
    partial class Form1
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
            this.textgradiC = new System.Windows.Forms.TextBox();
            this.btnC = new System.Windows.Forms.Button();
            this.btn_gf = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.cb_giorni = new System.Windows.Forms.ComboBox();
            this.Giorno_Selezionato = new System.Windows.Forms.TextBox();
            this.check_b1 = new System.Windows.Forms.CheckBox();
            this.check_b2 = new System.Windows.Forms.CheckBox();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(13, 37);
            this.label1.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 24);
            this.label1.TabIndex = 0;
            this.label1.Text = "°C";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // textgradiC
            // 
            this.textgradiC.Location = new System.Drawing.Point(81, 33);
            this.textgradiC.Margin = new System.Windows.Forms.Padding(4);
            this.textgradiC.Name = "textgradiC";
            this.textgradiC.Size = new System.Drawing.Size(125, 28);
            this.textgradiC.TabIndex = 1;
            this.textgradiC.Text = "0";
            this.textgradiC.TextChanged += new System.EventHandler(this.textgradiC_TextChanged);
            // 
            // btnC
            // 
            this.btnC.Location = new System.Drawing.Point(224, 33);
            this.btnC.Name = "btnC";
            this.btnC.Size = new System.Drawing.Size(75, 27);
            this.btnC.TabIndex = 2;
            this.btnC.Text = "Set";
            this.btnC.UseVisualStyleBackColor = true;
            this.btnC.Click += new System.EventHandler(this.btnC_Click);
            // 
            // btn_gf
            // 
            this.btn_gf.Location = new System.Drawing.Point(224, 82);
            this.btn_gf.Name = "btn_gf";
            this.btn_gf.Size = new System.Drawing.Size(75, 27);
            this.btn_gf.TabIndex = 5;
            this.btn_gf.Text = "Set";
            this.btn_gf.UseVisualStyleBackColor = true;
            this.btn_gf.Click += new System.EventHandler(this.button1_Click);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(81, 82);
            this.textBox1.Margin = new System.Windows.Forms.Padding(4);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(125, 28);
            this.textBox1.TabIndex = 4;
            this.textBox1.Text = "0";
            this.textBox1.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(13, 86);
            this.label2.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(28, 24);
            this.label2.TabIndex = 3;
            this.label2.Text = "°F";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.btn_gf);
            this.groupBox1.Controls.Add(this.textBox1);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.btnC);
            this.groupBox1.Controls.Add(this.textgradiC);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Location = new System.Drawing.Point(30, 12);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(310, 128);
            this.groupBox1.TabIndex = 6;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Conversione temp";
            this.groupBox1.Enter += new System.EventHandler(this.groupBox1_Enter);
            // 
            // cb_giorni
            // 
            this.cb_giorni.FormattingEnabled = true;
            this.cb_giorni.Items.AddRange(new object[] {
            "Lunedì ",
            "Martedì",
            "Mercoledì",
            "Giovedì",
            "Venerdì",
            "Sabato",
            "Domenica"});
            this.cb_giorni.Location = new System.Drawing.Point(30, 163);
            this.cb_giorni.Name = "cb_giorni";
            this.cb_giorni.Size = new System.Drawing.Size(121, 30);
            this.cb_giorni.TabIndex = 7;
            this.cb_giorni.SelectedIndexChanged += new System.EventHandler(this.cb_giorni_SelectedIndexChanged);
            // 
            // Giorno_Selezionato
            // 
            this.Giorno_Selezionato.Location = new System.Drawing.Point(208, 165);
            this.Giorno_Selezionato.Name = "Giorno_Selezionato";
            this.Giorno_Selezionato.Size = new System.Drawing.Size(100, 28);
            this.Giorno_Selezionato.TabIndex = 8;
            this.Giorno_Selezionato.TextChanged += new System.EventHandler(this.Giorno_Selezionato_TextChanged);
            // 
            // check_b1
            // 
            this.check_b1.AutoSize = true;
            this.check_b1.Location = new System.Drawing.Point(30, 239);
            this.check_b1.Name = "check_b1";
            this.check_b1.Size = new System.Drawing.Size(100, 28);
            this.check_b1.TabIndex = 9;
            this.check_b1.Text = "Sposato";
            this.check_b1.UseVisualStyleBackColor = true;
            // 
            // check_b2
            // 
            this.check_b2.AutoSize = true;
            this.check_b2.Location = new System.Drawing.Point(30, 288);
            this.check_b2.Name = "check_b2";
            this.check_b2.Size = new System.Drawing.Size(99, 28);
            this.check_b2.TabIndex = 10;
            this.check_b2.Text = "Con figli";
            this.check_b2.UseVisualStyleBackColor = true;
            this.check_b2.CheckedChanged += new System.EventHandler(this.Form1_Load);
            // 
            // textBox2
            // 
            this.textBox2.Location = new System.Drawing.Point(185, 261);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(100, 28);
            this.textBox2.TabIndex = 11;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(10F, 22F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(352, 351);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.check_b2);
            this.Controls.Add(this.check_b1);
            this.Controls.Add(this.Giorno_Selezionato);
            this.Controls.Add(this.cb_giorni);
            this.Controls.Add(this.groupBox1);
            this.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F);
            this.Margin = new System.Windows.Forms.Padding(4);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox textgradiC;
        private System.Windows.Forms.Button btnC;
        private System.Windows.Forms.Button btn_gf;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.ComboBox cb_giorni;
        private System.Windows.Forms.TextBox Giorno_Selezionato;
        private System.Windows.Forms.CheckBox check_b1;
        private System.Windows.Forms.CheckBox check_b2;
        private System.Windows.Forms.TextBox textBox2;
    }
}

