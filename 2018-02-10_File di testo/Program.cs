using System;
using System.IO;

namespace _2018_02_10_File_di_testo
{
    class Program
    {
        static int ne;
        static int[] numeri;

        static void Main(string[] args)
        {
            Console.Write("Quanti numeri: ");
            ne = Convert.ToInt32(Console.ReadLine());

            //estazione numeri casuali
            numeri = new int[ne];
            Random rand = new Random();
            for (int i = 0; i < ne; i++)
            {
                numeri[i] = rand.Next(1000);
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
