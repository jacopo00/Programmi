using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _2018_04_09_Garatuffi
{
    class Program
    {
        const int N_TUFFI = 2;
        static Giudici g = new Giudici();
        static Classifica c = new Classifica();
        static void Main(string[] args)
        {
            Concorrente x;
            
            char ch;

            if (c.Carica() == false)
            {
                Console.WriteLine("File concorrenti mancante");
                Console.ReadKey();
                return;
            }

            //menù
            do
            {
                Console.Clear();
                Console.WriteLine("[1] : Svolgimento gara");
                Console.WriteLine("[2] : Classifica finale");
                Console.WriteLine("[*] : Fine");
                Console.Write("Selezione");
                ch = Console.ReadKey().KeyChar;
                switch (ch)
                {
                    case '1':
                        Gara();
                        break;

                    case '2':

                        break;
                }
            } while (ch != '*');
           
        }
        //svolgimento della gara
        static void Gara()
        {
            for (int i = 0; i < N_TUFFI; i++)
            {
                Console.Clear();
                Console.WriteLine("{0} {1}", c.tab[i].nome, c.tab[i].naz);
                Console.WriteLine("Punteggi:");
                for (int k = 0; k < 6; k++)
                {
                    int v;
                    do
                    {
                        v = Convert.ToInt32(Console.ReadLine());

                    }while(v < 0 || v > 10);
                    g.Set(k, v);
                }
                c.tab[i].punti += 
            }
        }

    }
}
