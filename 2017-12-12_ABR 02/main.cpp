//Operazioni su alberi binari di ricerca
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "Abr.h"


void main (void)
{
	SNodo* r = 0;
	SNodo* n;
	int valori[] = {200,150,300,120,170};
	int ne = sizeof(valori)/sizeof(int);

	for(int i = 0; i < ne; i++)
	{
		n = new SNodo();
		memset(n,0,sizeof(SNodo));
		n->info = valori[i];
		Insert(r,n);
		//InsertRic(r,n);
	}
	printf("Visita anticipata\n");
	VisAnt(r);
	printf("Visita simmetrica\n");
	VisSimm(r);
	printf("Visita differita\n");
	VisDiff(r);
	//salva e carica l'albero
	SalvaABR("abr.bin",r);
	
	//elimina 
	printf("I nodi eliminati:\n");
	Elimina(r);

	CaricaABR("abr.bin",r);
	printf("Visita simmetrica\n");
	VisSimm(r);
	
	

	
	system("pause");
}
