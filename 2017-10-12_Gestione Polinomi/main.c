//Programma per la gestione di polinomi su lista: inserimento, operazioni e stampa.
#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

//prototipi
void InsPolinomio(SNodo** p1);	//Inserimento polinomio
SNodo* RicercaEsp(SNodo* p, int esp);	//Ricerca esponente
SNodo* Somma(SNodo* p1,SNodo*p2);	//Somma
SNodo* Prodotto(SNodo* p1, SNodo* p2);	//Prodotto
void VisualizzaPol(SNodo* p);	//Stampa polinomio

//main
void main (void)
{
	//Dichiarazione variabili
	SNodo *p1, *p2, *p3, *p4;
	SNodo* n;
	float coeff;

	p1 = 0;
	p2 = 0;
	p3 = 0;
	p4 = 0;

	//Inserimento polinomio 1
	printf("Inserimento primo polinomio\n");
	InsPolinomio(&p1);
	system("cls");

	//Inserimento polinomio 2
	printf("Inserimento secondo polinomio\n");
	InsPolinomio(&p2);
	system("cls");

	//Somma
	p3 = Somma(p1, p2);

	//Prodotto
	p4 = Prodotto(p1, p2);

	//Stampa primo polinomio
	printf("Primo polinomio\n");
	VisualizzaPol(p1);
	printf("\n");

	//Stampa secondo polinomio
	printf("Secondo polinomio\n");
	VisualizzaPol(p2);
	printf("\n");

	//Stampa somma polinomi
	printf("Somma polinomi\n");
	VisualizzaPol(p3);
	printf("\n");

	//Stampa prodotto polinomi
	printf("Prodotto polinomi\n");
	VisualizzaPol(p4);
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
SNodo* Somma(SNodo* p1,SNodo* p2)
{
	SNodo *n, *cor, *p;

	p = 0;
	while(p1 != 0 && p2 != 0)
	{
		n = (SNodo*)malloc(sizeof(SNodo));
		if(p1->info.esp > p2->info.esp)
        {
            n->info = p1->info;
            p1 = p1->next;
        }
        else
        {
            if(p1->info.esp < p2->info.esp)
            {
                n->info = p2->info;
                p2 = p2->next;
            }
            else
            {
                n->info = p1->info;
                n->info.coeff += p2->info.coeff;
                p1 = p1->next;
                p2 = p2->next;
            }
        }
        if(n->info.coeff == 0)
            free(n);
        else
            InsOrd(&p, n);
	}

	while(p1)
    {
        n = (SNodo*)malloc(sizeof(SNodo));
        n->info = p1->info;
        p1 = p1->next;
        InsOrd(&p, n);
    }

    while(p2)
    {
        n = (SNodo*)malloc(sizeof(SNodo));
        n->info = p2->info;
        p2 = p2->next;
        InsOrd(&p, n);
    }

	return p;
}

//Funzione prodotto
SNodo* Prodotto(SNodo* p1, SNodo* p2)
{
	SNodo* p, *n;
	SNodo *pos;
	SNodo* p3 = p2;
	p = 0;
	while(p1 != 0)
	{
		p2 = p3;
		while(p2 != 0)
		{
			n = (SNodo*)malloc(sizeof(SNodo));
			n->info.coeff = p1->info.coeff * p2->info.coeff;
			n->info.esp = p1->info.esp + p2->info.esp;
			pos = RicercaEsp(p, n->info.esp);
			if (RicercaEsp(p,n->info.esp) > 0)
				pos->info.coeff = pos->info.coeff + n->info.coeff;		
			else
				InsOrd(&p, n);

			p2 = p2->next;
		}
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
			printf("^%i",p->info.esp);
		p = p->next;
	}
}
