using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _2018_01_15_Array
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] array = new int[10];
            Random r = new Random();
            for (int i = 0; i < 10; i++)
            {
                array[i] = r.next();
            }
        }
    }
}
