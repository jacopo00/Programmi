using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _2018_01_16_Array
{
    class Program
    {
        const int MAX = 20;
        static void Main()
        {
            //dichiarazione array C#
            int[] vet;
            int ne;
            int i;
            //inserimento dati nell'array
            vet = new int[MAX];
            Random rand = new Random();
            LeggiNumero(out ne);
            
            for (i = 0; i < ne; i++)
            {
                vet[i] = rand.Next(100);
            }
            //visualizza vettore disordinato
            Console.WriteLine("Array disordinato:");
            Visualizza(vet, ne);
            //ordinamento del vettore
            Ordina(vet, ne);
            //visualizza dopo ordinamento
            Console.WriteLine("Array ordinato:");
            Visualizza(vet, ne);

            Console.ReadKey();

        }//end main
        //lettura di un numero
        static void LeggiNumero(out int ne)
        {
            do
            {
                Console.Write("Numero elementi:");
                ne = Convert.ToInt32(Console.ReadLine());
            } while (ne > MAX);
        }
        
        //visualizzazione array
        static void Visualizza(int []v, int ne)
        {
            //Console.Clear();
            for (int i = 0; i < ne; i++)
            {
                Console.WriteLine("V[{0}] = {1}", i, v[i]);
            }
        }
        //ordina vettore 
        static void Ordina(int[] v, int ne)
        {
            int i, j;
            for(i = 0; i < ne-1; i++)
                for(j = i+1; j < ne; j++)
                    if (v[i] > v[j])
                    {
                        Scambia( ref v[i], ref v[j]);
                    }
        }
        //scambia due valori
        static void Scambia(ref int x, ref int y)
        {
            int app = x;
            x = y;
            y = app;
        }
    }
}
