#include "Banca.h"

CBanca::CBanca(void)
{
}


CBanca::~CBanca(void)
{
}

//scansione 
int CBanca::Scansione(){
	int n = 0;
	for(int i = 0; i < MAX_C; i++)
	{
		if(vet[i].ident[0]==0)
			n++;
	}
	return n;
}
//affitta
char* CBanca::Affitta(char* ident,char* data,int n){
	numeri[0]=0;
	for(int i=0;i<MAX_C;i++)
		if(vet[i].ident[0]==0)
			sprintf(numeri,"%s %i-",numeri,i);
}

