using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace _2018_04_09_Garatuffi
{
    public class Classifica
    {
        public const int  DIM = 100;
        public const string  nome_f = "CONCORRENTI.TXT";
        //attributi
        public Concorrente[] tab;
        int ne;

        //costruttore
        public Classifica()
        {
            tab = new Concorrente[DIM];
            ne = 0;
        }
        //carica
        public bool Carica()
        {
            if (File.Exists(nome_f) == false)
                return false;
            Concorrente x;
            
            StreamReader sr = new StreamReader(nome_f);
            string riga;
            while ((riga = sr.ReadLine()) != null)
            {
                string[] comp = riga.Split('\t');
                x.nome = comp[0];
                x.naz = comp[1];
                x.punti = 0;
                Aggiungi(x);
            }
            sr.Close();
            return true;
        }
        //aggiungi 
        public bool Aggiungi(Concorrente x)
        {
            if (ne >= DIM)
                return false;
            tab[ne] = x;
            ne++;
            return true;
        }

    }
}
