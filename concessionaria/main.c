//Programma per la gestione di una concessionaria
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//define
#define DIM 2

//typedef
typedef struct _SAuto
{
	char marca[20];
	char modello[20];
	int cil;
	float prezzo;
}SAuto;

//prototipi
int Carica(char nomefile[]);
int Salva(char nomefile[]);
void Leggi_Auto(SAuto* x);
int Aggiungi(SAuto x);
void Visualizza();

//Variabili globali
SAuto Tab[DIM];
int ne;

//main
void main (void)
{
	SAuto x;
	int pos;
	char ch;

	//Caricamento dati
	Carica("Auto.bin");

	//menù
	do
	{
		system("cls");
		printf("[1]: Acquisto\n");
		printf("[2]: Vendita\n");
		printf("[3]: Elenco\n");
		printf("[*]: Fine\n");
		printf("Scegli: ");

		ch = _getch();
		switch(ch)
		{
			case '1':
				Leggi_Auto(&x);
				if(Aggiungi(x) == 1)
				{
					Salva("Auto.bin");
				}
				else
				{
					printf("Spazio insufficiente\n");
					system("pause");
				}
				break;

			case '2':
				Visualizza();
				printf("Numero auto: ");
				scanf("%i",&pos);
				//Elimina(pos);
				Salva("Auto.bin");
				break;

			case '3':
				Visualizza();
				system("pause");
				break;
		}

	}while (ch != '*');

	system("pause");
}

int Carica(char nomefile[])
{
	FILE* f;
	int i;

	ne  = 0;
	f = fopen(nomefile,"rb");
	if(f == 0)
		return 0;
	fread(&ne, sizeof(ne), 1, f);
	for(i=0; i<ne; i++)
		fread(&Tab[i], sizeof(SAuto), 1, f);
	fclose(f);

	return 1;
}

int Salva(char nomefile[])
{
	FILE* f;
	int i;

	f = fopen(nomefile,"wb");
	if(f == 0)
		return 0;
	fwrite(&ne, sizeof(ne), 1, f);
	for(i=0; i<ne; i++)
		fwrite(&Tab[i], sizeof(SAuto), 1, f);
	fclose(f);

	return 1;
}

void Leggi_Auto(SAuto* x)
{
	system("cls");
	printf("Marca: ");
	scanf("%s", x->marca);
	fflush(stdin);
	printf("Modello: ");
	scanf("%s", x->modello);
	fflush(stdin);
	printf("Cilindrata: ");
	scanf("%i", &x->cil);
	fflush(stdin);
	printf("Prezzo: ");
	scanf("%f", &x->prezzo);
	fflush(stdin);
}

int Aggiungi(SAuto x)
{
	if(ne >= DIM)
		return 0;

	Tab[ne] = x;
	ne++;

	return 1;
}

void Visualizza()
{
	int i;

	system("cls");
	printf(" Marca          Modello              Cilindrata     Prezzo\n");
	printf("_________________________________________________________\n");
	for(i=0; i<ne; i++)
	{
		printf("%3i %-15s %-15s %5i %5.2f\n",i+1, Tab[i].marca, Tab[i].modello, Tab[i].cil, Tab[i].prezzo);
	}

}
