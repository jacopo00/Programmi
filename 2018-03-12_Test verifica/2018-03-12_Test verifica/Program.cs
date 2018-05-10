using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _2018_03_12_Test_verifica
{
    class Program
    {
        static void Main(string[] args)
        {
            public class Candidato{
                public string nome;
                public int [] voti;
                public int tot;
                public Candidato();
                voti = new int[5];
             public bool Salva(stream writer sw){
                sw.WriteLine(Nome);
                for(int i = 0; i<5; int++)
                    sw.WriteLine(voti[i].ToString);
                sw.WriteLine(tot);
                return true;
             }
            
            public bool carica (StreamRider sr){
                Nome = sr.ReadLine();
                for(int i = 0; i<5; int++)
                    voti[i] = Convert.ToInt32(sr.ReadLine());
                tot = Convert.ToInt32(sr.ReadLine());
                return true;
            }
       }
            public class Concorso{
                public candidato [] tab;
                public int ne;
                public Concorso(){
                    tab = new candidato[30];
                    ne = 0;
                }
                tab bool SalvaTab(string nomefile){
                    StreamWriter sw = new StreamWriter(nomefile);
                    for(int i = 0;i<ne; i++)
                        tab[i].Salva(sw);
                    return true;
                }

                //Visualizza i dati
            Visualizza(numeri, ne);

            //Salvataggio su file
            Salva("Numeri.txt", numeri, ne);

            //Caricamento dati da file
            Carica("Numeri.txt", numeri, ref ne);

            //Visualizza i dati
            Visualizza(numeri, ne);

            Console.ReadKey();
        }

        //salva su file
        static void Salva(string nome, int[] v, int ne)
        {
            StreamWriter sw = new StreamWriter(nome);
            for (int i = 0; i < ne; i++)
            {
                sw.WriteLine(v[i]);
            }
            sw.Close();
        }

        //carica da file
        static void Carica(string nome, int[] v, ref int ne)
        {
            StreamReader sr = new StreamReader(nome);
            string s;
            ne = 0;

            while ((s = sr.ReadLine()) != null);
            {
                v[ne] = Convert.ToInt32(s);
                ne++;
            }
            sr.Close();
        }

        //Visualizza file
        static void Visualizza(int[] v, int ne)
        {
            for (int i = 0; i < ne; i++)
                Console.WriteLine(v[i]);
        }
    }
}

        }
    }
}
