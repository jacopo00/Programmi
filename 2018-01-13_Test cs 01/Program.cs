using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

namespace _2018_01_13_Test_cs_01
{
    class Program
    {
        static void Main(string[] args)
        {
            float b, a, area;
            string s;

            Console.Write("Base: ");
            s = Console.ReadLine();
            b = Convert.ToSingle(s);

            Console.Write("Altezza: ");
            a = Convert.ToSingle(Console.ReadLine());

            area = a * b;
            Console.Write("Il rettangolo di base {0} e altezza {1} ha area {2}",b,a,area);
          

            Console.ReadKey();
        }
    }
}
