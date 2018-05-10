#include <stdlib.h>
#include <stdio.h>
#include "Lista.h"

void Visualizza(SNodo* p);

void main (void)
{
	SNodo* p;
	SNodo* n;
	SNodo* u;
	int i;

	//Inizializzo la lista
	p = 0;

	for(i=0; i<5; i++)
	{
		n = (SNodo*)malloc(sizeof(SNodo));
		n->info = rand()%100;
		n->next = 0;
		//InsTesta(&p, n);
		//InsCoda(&p, &u, n);
		InsOrd(&p, n);
	}
	printf("Contenuto della lista\n");
	Visualizza(p);
	EliminaLista(&p);
	printf("Contenuto lista dopo eliminazione \n");
	Visualizza(p);
	system("pause");
}

void Visualizza(SNodo* p)
{
	while(p != 0)
	{
		printf("%i\n", p->info);
		p = p->next;
	}
}