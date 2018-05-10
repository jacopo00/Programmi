//Programma per la gestione di una lista statica su array

//include----------------
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//define-----------------
#define DIM 10

//typedef----------------
typedef struct _SNodo
{
    int info;
    int next;		//Indice elemento seguente
}SNodo;

//prototipi--------------
int InsLista(SNodo vet[], SNodo x, int *ne, int *p);	//Inserimento in una lista statica
void ScriviListe (SNodo vet[], int p);					//Stampa lista statica ordinata
void SituazioneLista(SNodo vet[], int ne, int p);		//stampa lista statica con puntatori al successivo

//main-------------------
void main (void)
{
    SNodo vet [DIM];		//struttura dei dati
    SNodo x;
    int ne = 0;
    int p = -1;				//primo della lista
    char ch;

    do
    {
        system("cls");
        printf("[1]Inserimento nuovo dato\n");
        printf("[2]Stampa dati in ordine\n");
        printf("[*]Fine\n");
        printf("Scelta: ");
        ch = _getch();
        system("cls");

        switch(ch)
        {
            case '1':
                x.info = rand() ;
				x.next = -1;
                printf("Numero estratto: %i\n", x.info);
                InsLista(vet, x, &ne, &p);
                system("pause");
                break;

            case '2':
                ScriviListe(vet, p);
				SituazioneLista(vet, ne, p);
                system("pause");
                break;
        }

    }while(ch != '*');
}

//Inserimento in una lista statica
int InsLista(SNodo vet[], SNodo x, int *ne, int *p)
{
    int n, prec, cor;

    if(*ne >= DIM)
        return 0;
    prec = -1;
    cor  = *p;
    while(cor != -1)
    {
        if(vet[cor].info > x.info)
            break;
        prec = cor;
        cor = vet[cor].next;
    }
    x.next = cor;
    if(prec == -1)
        *p = *ne;
    else
        vet[prec].next = *ne;

    vet[*ne] = x;
    *ne = *ne + 1;
    return 1;
}

//Stampa lista statica ordinata
void ScriviListe (SNodo vet[], int p)
{
    int k = p;

    while (k != -1)
    {
        printf("%i\n", vet[k].info);
        k = vet[k].next;
    }
}

//stampa lista statica con puntatori al successivo
void SituazioneLista(SNodo vet[], int ne, int p)
{
	int cor = p; 
	int i;
	
	printf("Situazione della lista statica\n");
	printf("p = %i\n", p);
	for(i=0; i<ne; i++)
	{
		printf("%3i  %5i  %2i\n", i, vet[i].info, vet[i].next);
	}
}