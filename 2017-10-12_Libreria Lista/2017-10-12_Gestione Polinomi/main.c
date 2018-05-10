//Programma per la gestione di polinomi su lista: inserimento, operazioni e stampa.
#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

//prototipi
void InsPolinomio(SNodo** p1);
SNodo* RicercaEsp(SNodo* p, int esp);
SNodo* Somma(SNodo* p1,SNodo*p2);
void VisualizzaPol(SNodo* p);

void main (void)
{
	//Dichiarazione variabili
	SNodo *p1, *p2, *p3;
	SNodo* n;
	float coeff;

	p1 = 0;
	p2 = 0;
	p3 = 0;

	//Inserimento polinomio
	InsPolinomio(&p1);
	VisualizzaPol(p1);
	system("pause");

}

//Funzione inserimento polinomio
void InsPolinomio(SNodo** p)
{
	float coeff;
	SNodo * n;

	do 
	{
		printf("coefficente: ");
		scanf("%f", &coeff);

		if(coeff != 0)
		{
			n = (SNodo*)malloc(sizeof(SNodo));
			n->info.coeff = coeff;

			printf("esponente: ");
			scanf("%i", &n->info.esp);
			InsOrd(p, n);
		}

	}while(coeff != 0);
}
//Funzione ricerca esponente
SNodo* RicercaEsp(SNodo* p, int esp)
{
	while(p != 0)
	{
		if(p->info.esp == esp)
			return p;
		p = p->next;
	}
	return p;
}

//Funzione somma 
SNodo* Somma(SNodo* p1,SNodo*p2)
{
	SNodo *n, *cor, *p;
	int esp;

	cor = p1->info.esp>p2->info.esp?p1:p2;
	while(p1)
	{
		cor=RicercaEsp(p2, p1->info.esp);
		n = (SNodo*)malloc(sizeof(SNodo));
		n->info = p1->info;
		if (cor != 0)
			n->info.coeff = cor ->info.coeff;
		InsOrd(&p,n);
		p1 = p1->next;
	}
	return p;
}

//Funzione visualizza polinomio
void VisualizzaPol(SNodo* p)
{
	while(p)
	{
		if(p->info.coeff > 0)
			printf("+");
		printf("%.2f",p->info.coeff);
		printf("%c", p->info.esp>0?'x':0);
		if (p->info.esp>1)
			printf("^%i ",p->info.esp);
		p = p->next;
	}
}
