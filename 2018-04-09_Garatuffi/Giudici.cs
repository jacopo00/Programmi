using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _2018_04_09_Garatuffi
{
    public class Giudici
    {
        int[] voto = new int[6];

        public int GetVoto()
        {
            int somma = 0;
            voto[p_min] = 0;
            voto[p_max] = 0;
            for (int i = 0; i < 6; i++)
                somma += voto[i];
            return somma;
        }

        public void Set(int i, int x)
        {
            voto[i] = x;
        }

        int p_min
        {
            get {
                int min = 0;
                for (int i = 1; i < 6; i++)
                    if (voto[i] < voto[min])
                        min = i;
                return min;
            }
        }
        int p_max
        {
            get
            {
                int max = 0;
                for (int i = 1; i < 6; i++)
                    if (voto[i] < voto[max])
                        max = i;
                return max;
            }

        }
    }
}
