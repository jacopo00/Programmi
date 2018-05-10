namespace _2018_03_06_TestView
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
            this.menu = new System.Windows.Forms.MenuStrip();
            this.fileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.menu_apri = new System.Windows.Forms.ToolStripMenuItem();
            this.menu_salva = new System.Windows.Forms.ToolStripMenuItem();
            this.menu_salvaas = new System.Windows.Forms.ToolStripMenuItem();
            this.menu_esci = new System.Windows.Forms.ToolStripMenuItem();
            this.list_dati = new System.Windows.Forms.ListView();
            this.columnHeader1 = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.columnHeader2 = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.columnHeader3 = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.columnHeader4 = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.menu.SuspendLayout();
            this.SuspendLayout();
            // 
            // menu
            // 
            this.menu.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.fileToolStripMenuItem});
            this.menu.Location = new System.Drawing.Point(0, 0);
            this.menu.Name = "menu";
            this.menu.Size = new System.Drawing.Size(401, 28);
            this.menu.TabIndex = 0;
            this.menu.Text = "menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            this.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.menu_apri,
            this.menu_salva,
            this.menu_salvaas,
            this.menu_esci});
            this.fileToolStripMenuItem.Name = "fileToolStripMenuItem";
            this.fileToolStripMenuItem.Size = new System.Drawing.Size(44, 24);
            this.fileToolStripMenuItem.Text = "File";
            // 
            // menu_apri
            // 
            this.menu_apri.Name = "menu_apri";
            this.menu_apri.Size = new System.Drawing.Size(154, 24);
            this.menu_apri.Text = "Apri";
            this.menu_apri.Click += new System.EventHandler(this.menu_apri_Click);
            // 
            // menu_salva
            // 
            this.menu_salva.Name = "menu_salva";
            this.menu_salva.Size = new System.Drawing.Size(154, 24);
            this.menu_salva.Text = "Salva";
            // 
            // menu_salvaas
            // 
            this.menu_salvaas.Name = "menu_salvaas";
            this.menu_salvaas.Size = new System.Drawing.Size(154, 24);
            this.menu_salvaas.Text = "Salva come";
            // 
            // menu_esci
            // 
            this.menu_esci.Name = "menu_esci";
            this.menu_esci.Size = new System.Drawing.Size(154, 24);
            this.menu_esci.Text = "Esci";
            this.menu_esci.Click += new System.EventHandler(this.menu_esci_Click);
            // 
            // list_dati
            // 
            this.list_dati.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.columnHeader1,
            this.columnHeader2,
            this.columnHeader3,
            this.columnHeader4});
            this.list_dati.GridLines = true;
            this.list_dati.Location = new System.Drawing.Point(0, 31);
            this.list_dati.Name = "list_dati";
            this.list_dati.Size = new System.Drawing.Size(401, 317);
            this.list_dati.TabIndex = 1;
            this.list_dati.UseCompatibleStateImageBehavior = false;
            this.list_dati.View = System.Windows.Forms.View.Details;
            // 
            // columnHeader1
            // 
            this.columnHeader1.Text = "id";
            // 
            // columnHeader2
            // 
            this.columnHeader2.Text = "prodotto";
            this.columnHeader2.Width = 160;
            // 
            // columnHeader3
            // 
            this.columnHeader3.Text = "prezzo";
            // 
            // columnHeader4
            // 
            this.columnHeader4.Text = "quantità";
            // 
            // FormMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(401, 349);
            this.Controls.Add(this.list_dati);
            this.Controls.Add(this.menu);
            this.MainMenuStrip = this.menu;
            this.Name = "FormMain";
            this.Text = "Form1";
            this.menu.ResumeLayout(false);
            this.menu.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menu;
        private System.Windows.Forms.ToolStripMenuItem fileToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem menu_apri;
        private System.Windows.Forms.ToolStripMenuItem menu_salva;
        private System.Windows.Forms.ToolStripMenuItem menu_salvaas;
        private System.Windows.Forms.ToolStripMenuItem menu_esci;
        private System.Windows.Forms.ListView list_dati;
        private System.Windows.Forms.ColumnHeader columnHeader1;
        private System.Windows.Forms.ColumnHeader columnHeader2;
        private System.Windows.Forms.ColumnHeader columnHeader3;
        private System.Windows.Forms.ColumnHeader columnHeader4;
    }
}

