using System;


namespace _2018_01_13_Cicli_cs
{
    class Program
    {
        static void Main(string[] args)
        {
            Random rand = new Random();
            int i;
            int n = Convert.ToInt32( args[0] );

            //ciclo do while
            i = 0;
            do
            {
                Console.WriteLine(rand.Next(100).ToString());
                i++;
            } while (i < n);

            //ciclo while
            i = 0;
            while (i < n)
            {
                Console.WriteLine(rand.Next(100).ToString());
                i++;
            }

            //ciclo for
            i = 0;
            for (i = 0; i < n; i++)
            {
                Console.WriteLine(rand.Next(100).ToString());
                
            }
            Console.ReadKey();



        }
    }
}
