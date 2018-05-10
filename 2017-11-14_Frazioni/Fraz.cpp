#include "Fraz.h"
#include <stdio.h>


CFraz::CFraz(int num, int den)
{
	n = num;
	d = den;
}


CFraz::~CFraz(void)
{
}

CFraz::CFraz(char s[]){
	sscanf(s,"%i/%i",&n,&d);
	if(d==0)
		d=1;
}

char* CFraz::Get()
{
	
	if(d==1)
		sprintf(s,"%i",n);
	else
		sprintf(s,"%i/%i",n,d);
	return s;
}



int CFraz::mcd()
{
	int nc = n;
	int dc = d;

	if(nc<0)
		nc=-nc;
	while(nc != dc)
	{
		if(nc >dc)
			nc = nc-dc;
		else
			dc = dc -nc;

	}
	return nc;
}
void CFraz::MinTer()
{
	int dc = mcd();
	n = n/dc;
	d = d/dc;
}

CFraz CFraz::operator+(CFraz fadd)
{
	CFraz app;
	app.d = d * fadd.d;
	app.n = n * fadd.d + fadd.n * d;
	return app;
}

CFraz CFraz::operator-(CFraz fsott)
{
	CFraz app;
	app.d = d * fsott.d;
	app.n = n * fsott.d - fsott.n * d;
	return app;
}

CFraz CFraz::operator*(CFraz fpro)
{
	CFraz app;
	app.d = d * fpro.d;
	app.n = n * fpro.n;
	return app;
}

CFraz CFraz::operator/(CFraz fdiv)
{
	CFraz app,fi,f;
	fi.n = f.d;
	fi.d = f.n;

	app.d = n * fi.n;
	app.n = d* f.d;
	return app;
}