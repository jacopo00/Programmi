// In una matrice da 3x3 inserire in ogni casella 5 container identificati da un codice 
// e da il contenuto
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

//define
#define MAXC 5
#define MAXP 3

//definizione struct
typedef struct _SContainer
{
	char codice[4];
	char contenuto[20];
}Container;

typedef struct _SPiazzola
{
	Container piazzola[MAXC];
}Piazzola;

//Inizializzazione struttura

//programma principale
void main(void)
{
	//definizione variabili
	Piazzola parco[MAXP][MAXP];
	Container app;
	char ch;
	int i=0, j=0, k=0;

	//menù
	do
	{
		system("cls");
		printf("[1]Arrivo container\n");
		printf("[2]Partenza container\n");
		printf("[3]Visualizza\n");
		printf("[*]Fine\n");
		printf("Scelta: ");
		ch = _getch();
		system("cls");

		switch(ch)
		{
			case '1':
				printf("Inserisci codice: ");			//Inserimento codice container
				scanf("%s", app.codice);
				printf("Inserisci contenuto: ");		//Inserimento contenuto container
				scanf("%s", app.contenuto);
				//Ricerca del primo posto diponibile
				//Copia dei dati del container in quel posto
				break;

			case'2':
				//RicercaContainer
				memset
				//Elimina
				break;

			case'3':
				//Visualizza
				break;
		}

	}while(ch != '*'); 
}


