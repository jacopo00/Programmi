using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _2018_01_16_FrazioneName
{
    public class Frazione
    {
         public int n,d;
	     public string s;
	

    //costruttore della classe
	public Frazione(int num = 0, int den=1)
    {
        n = num;
        d = den;
    }
	

	//metodi
	public void Set(int num = 0, int den = 1)
    {
        n = num;
        d = den;
        MinTer();
    }
    public static Frazione operator +(Frazione f, Frazione f2)
    {
        Frazione  app = new Frazione();
        app.d = f.d * f2.d;
        app.n = f.n * f2.d + f.d * f2.n;
        app.MinTer();
        return app;
    }
    public static Frazione operator -(Frazione f, Frazione f2)
    {
        Frazione app = new Frazione();
        app.d = f.d * f2.d;
        app.n = f.n * f2.d - f.d * f2.n;
        app.MinTer();
        return app;
    }
    public static Frazione operator *(Frazione f, Frazione f2)
    {
        Frazione app = new Frazione();
        app.d = f.d * f2.d;
        app.n = f.n * f2.d * f.d * f2.n;
        app.MinTer();
        return app;
    }
    public static Frazione operator /(Frazione f, Frazione f2)
    {
        Frazione app = new Frazione();
        app.n = f.n * f2.n;
        app.d = f.n * f2.d / f.d * f2.n;
        app.MinTer();
        return app;
    }


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
	    n = n / dc;
	    d = d / dc;
    }
    
    
    }
}
