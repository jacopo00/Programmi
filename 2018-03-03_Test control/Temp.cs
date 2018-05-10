using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _2018_03_03_Test_control
{
    public class Temp
    {
        float gradiC;
        float gradiF;
        string msg;

        //proprietà per gradi centigradi
        public float GradiC
        {
            get { return gradiC; }
            set {
                    gradiC = value;
                    gradiF = (float)(gradiC * 9.0F / 5.0F + 32);

                }
        }

        //proprietà gradi farheneit
        public float GradiF
        {
            get { return gradiF; }
            set 
            {
                  gradiF = value; 
                  gradiC = 
            
            }
        }

        public string Msg
        {
            get { return msg; } 
        }
        
    }
}
