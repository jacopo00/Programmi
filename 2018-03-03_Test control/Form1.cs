using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace _2018_03_03_Test_control
{
    public partial class Form1 : Form
    {
        //istanza della class temperatura
        Temp tmp = new Temp();
        string [] giorni = new string [] {
            "Lunedì",
            "Martedì",
            "Mercoledì",
            "Giovedi",
            "Venerdi",
            "Sabato",
            "Domenica",
        };

        string[] sposato = new string[] {
            "Non sposato",
            "Sposato"
        };

        string[] figli = new string[] {
            "Con figli",
            "Senza figli"
        };
        
        public Form1()
        {
            InitializeComponent();
            ComboPopulate();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void btnC_Click(object sender, EventArgs e)
        {
            tmp.gradiC = Convert.ToSingle(text_gradiC.Text);
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textgradiC_TextChanged(object sender, EventArgs e)
        {

        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        private void cb_giorni_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void Giorno_Selezionato_TextChanged(object sender, EventArgs e)
        {
            int idx = cb_giorni.SelectedIndex;
            text_gsel.Text
        }
    }
}
