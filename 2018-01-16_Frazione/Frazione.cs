using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _2018_01_16_Frazione
{
    public class Frazione
    {
        static int n,d;
	    string s;
	

    //costruttore della classe
	public Frazione(int num = 0, int den=1)
    {
        n = num;
        d = den;
    }
	

	//metodi
	public string Get()
    {
        MinTer();
        s = n.ToString();
	    if(d > 1)
		    s = n.ToString() + "/"+ d.ToString();
	    return s;
    }


    public void Set(int num = 0, int den = 1)
    {
        n = num;
        d = den;
        MinTer();
    }
    public Frazione operator +(Frazione f, Frazione f2)
    {
        Frazione  app = new Frazione();
        app.d = f.d * f2.d;
        app.n = f.n * f2.n + f.n * f2.d
        return app;
    }
    //public Frazione operator-(Frazione fsott);
    //public Frazione operator*(Frazione fpro);
    //public Frazione operator/(Frazione fdiv);


	//metodi protetti 
	protected int mcd()
    {
        int nc = n;
	    int dc = d;

	    if(nc < 0)
		    nc=-nc;
	    while(nc != dc)
	    {
		    if(nc > dc)
			    nc = nc-dc;
		    else
			    dc = dc -nc;
        }
	    return nc;
    }
	
        
    protected void MinTer()
    {
        int dc = mcd();
	    n = n/dc;
	    d = d/dc;
    }
    
    
    }
}
