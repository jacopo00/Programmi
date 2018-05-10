using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _2018_01_16_Frazione
{
    class Program
    {
        static void Main(string[] args)
        {
            Frazione f = new Frazione();
	        Frazione f1 = new Frazione (5,2);
	        Frazione f2 = new Frazione(3);
	        Frazione f3 = new Frazione(10,4);
            f = f3;
	
	       

	        Console.WriteLine("f1 = {0}",f1.Get());
	        Console.WriteLine("f2 = {0}",f2.Get());
	        Console.WriteLine("f3 = {0}",f3.Get());

            //somma
            f = f1 + f2;
            Console.WriteLine("{0} + {1} = {2}",f1.Get(), f2.Get(), f.Get());
	
            ////sottrazione
            //fsott=f1-f2;
            //printf("%s-%s = %s\n",f1.Get(), f2.Get(), fsott.Get());

            ////prodotto
            //fpro=f1 * f2;
            //printf("%s*%s = %s\n",f1.Get(), f2.Get(), fpro.Get());

            ////divisione
            //fdiv=f1 / f2;
            //printf("%s / %s = %s\n",f1.Get(), f2.Get(), fdiv.Get());

            Console.ReadKey();

        }
    }
}
