using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO;

namespace _2018_03_06_TestView
{
    public partial class FormMain : Form
    {
        const string NOME_FILE = "prodotti.txt";
        //prodotto [] tab;
        //int ne;
        List<prodotto> tab = new List<prodotto>();

        public FormMain()
        {
            InitializeComponent();
           
        }

        //gestione menu 
        private void menu_esci_Click(object sender, EventArgs e)
        {
            Close();
        }

        //apertura file
        private void menu_apri_Click(object sender, EventArgs e)
        {
            string riga;
            prodotto x;
            StreamReader sr = new StreamReader(NOME_FILE);
            tab.Clear();
            while ((riga = sr.ReadLine()) != null)
            {
                x = new prodotto();
                string[] pezzi = riga.Split('\t');
                x.id = Convert.ToInt32(pezzi[0]);
                x.prod = pezzi[1];
                x.prezzo = Convert.ToSingle(pezzi[2]);
                x.qta = Convert.ToInt32(pezzi[3]);

                tab.Add(x);

            }

            sr.Close();
            Visualizza();
        }

        //
        void Visualizza()
        {
            list_dati.Items.Clear();
            for (int i = 0; i < tab.Count; i++)
            {
                ListViewItem item = new ListViewItem(tab[i].id.ToString());
                item.SubItems.Add(tab[i].prod);
                item.SubItems.Add(tab[i].prezzo.ToString());
                item.SubItems.Add(tab[i].qta.ToString());
               

                list_dati.Items.Add(item);
            }
        }
    }
}
