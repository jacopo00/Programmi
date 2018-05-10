//Programma di gestione liste su file 
#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

//prototipi
int ContaLista(SNodo* p);
int Salva(SNodo* p, char nomefile[]);
int Carica(SNodo*& p, char nomefile[]);
void Visualizza(SNodo* p);

void main ()
{
	//dichiarazione variabili
	SNodo* p = 0;
	SNodo* n;
	int i;
	char nomeFile[20];

	//Carica lista
	//Carica(p, "Lista");
	Visualizza(p);

	//Creazione lista 
	for (i=0; i<5; i++)
	{
		n = new (SNodo);
		n->info = rand() % 1000;
		n->next = 0;
		InsOrd(p,n);
	}
	Visualizza(p);

	//Salva lista
	Salva(p, "Lista");

}

//Funzione conta elementi lista
int ContaLista(SNodo* p)
{
	int c = 0;
	while(p)
	{
		c ++;
		p = p->next;
	}
	return c;
}

//Funzione salva lista su file
int Salva(SNodo* p, char nomefile[])
{
	FILE* f;
	int ne;

	f = fopen(nomefile,"wb");
	if(f == 0)
		return 0;

	ne = ContaLista(p);
	printf("\n%i\n\n", ne);

	fwrite(&ne, sizeof(SNodo), 1, f);
	while(fwrite(&p->info, sizeof(SNodo), 1, f) > 0)
	{
		fwrite(&p->info, sizeof(SNodo), 1, f);
	}

	fclose(f);

	return 1;
}

//Funzione carica lista da file
int Carica(SNodo*& p, char nomefile[])
{
	FILE* f;
	int ne;
	int app;
	SNodo* n;

	f = fopen(nomefile,"rb");
	if(f == 0)
		return 0;

	fread(&ne, sizeof(ne), 1, f);
	
	while(fread(&app, sizeof(SNodo), 1, f))
	{
		fread(&app, sizeof(SNodo), 1, f);
		n = new(SNodo);
		n->info = app;
		n->next = 0;
		InsOrd(p,n);
	}
	fclose(f);

	return 1;
}

//Funzione visualizza
void Visualizza(SNodo* p)
{
	while(p)
	{
		printf("%i\n", p->info);
		p = p->next;
	}
	system("pause");
}