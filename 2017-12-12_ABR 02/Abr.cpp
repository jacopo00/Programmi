#include "Abr.h"
#include <stdio.h>
#include <stdlib.h>

//prototipi locali
void SalvaBin(FILE*f,SNodo* r);
//void CaricaBin(FILE*f,SNodo*& r);


//inserimento iterativo
void Insert(SNodo*& r, SNodo* n)
{
	if(r == 0)
		r = n;
	else
	{
		SNodo* prec = r;
		SNodo* corr = r;
		while (corr != 0)
		{
			prec = corr;
			if(n ->info > corr ->info)
				corr = corr -> d;
			else
				corr = corr -> s;
		}
		if(n ->info > prec ->info)
			prec -> d = n;
		else
			prec -> s = n;
	}
}

//inserimento ricorsivo
void InsertRic(SNodo*& r,SNodo* n)
{
	if(r==0)
		r = n;
	else
		if(n->info > r->info)
			InsertRic(r->d,n);
		else
			InsertRic(r->s,n);
}

//visita anticipata
void ABR::VisAnt(SNodo* r)
{
	if(r != 0)
	{
		
		printf("%i\n",r->info);
		VisAnt(r->s);
		VisAnt(r->d);
	}

}
void ABR::VisAnt()
{
	VisAnt(r);
}

//visita simmetrica
void ABR::VisSimm(SNodo* r)
{
	if(r != 0)
	{
		
		VisSimm(r->s);
		printf("%i\n",r->info);
		VisSimm(r->d);
	}
}

//visita differita
void ABR::VisDiff(SNodo* r)
{
	if(r != 0)
	{
		VisDiff(r->s);
		VisDiff(r->d);
		printf("%i\n",r->info);
	}
}

//salva ABR su un file binario
bool SalvaABR(char* nomef,SNodo* r)
{
	FILE* f;
	f = fopen(nomef,"wb");
	if(f==0)
		return false;
	SalvaBin(f,r->s);
	fclose(f);
		return true;
}


//ricostruisce ABR su file binario
bool CaricaABR(char* nomef,SNodo*& r)
{
	FILE* f;
	int info;
	r=0;
	f = fopen(nomef,"rb");
	if(f==0)
		return false;
	while(fread(&info,sizeof(int),1,f) > 0)
	{
		SNodo* n = new SNodo();
		n->info = info;
		n->s = 0;
		n->d = 0;
		Insert(r,n);
	}
	fclose(f);
	return true;
}

//funzione SalvaBin
void SalvaBin(FILE*f,SNodo* r)
{
	if(r != 0)
	{
		fwrite(&r->info,sizeof(int),1,f);
		SalvaBin(f,r->s);
		SalvaBin(f,r->d);
	}
}

//Elimina memoria
void Elimina(SNodo*& r)
{
	if(r != 0)
	{
		VisDiff(r->s);
		VisDiff(r->d);
		printf("%i\n",r->info);
		delete(r);
		r=0;
	}
}


