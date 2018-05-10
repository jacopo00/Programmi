#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Parcheggio.h"

void main(void)
{
	CParcheggio parcheggio;
	char ch;
	int codice,posto;
	do
	{
		system("cls");
		printf("[+] Ingresso\n");
		printf("[-] Uscita\n");
		printf("[*] Fine\n");
		ch=_getch();
		switch(ch)
		{
			case '+':
				parcheggio.Entrata(codice,posto);
				if(posto == -1)
					printf("Parcheggio completo");
				else
					printf("Codice: %i - Posto: %i\n",codice,posto + 1);
				system("pause");
				break;

			case '-':
				printf("Codice?");
				scanf("%i",&codice);
				if (parcheggio.Uscita(codice,posto) == true)
					printf("Liberato posto %i\n",posto + 1);
				else
					printf("Codice non valido\n");
				system("pause");
				break;
		}
	}while(ch != '*');

}

//parcheggio.cpp
#include "Parcheggio.h"


CParcheggio::CParcheggio(void)
{
	for(int i = 0; i < N_MAX; i++)
		posti[i] = 0;
	codice = 1;
}


CParcheggio::~CParcheggio(void)
{
}

void CParcheggio::Entrata(int &cod, int & pos)
{
	pos = Ricerca(0);
	
	if (pos == -1)
		return;
	cod = codice;
	
	posti[pos]=cod;
	codice = codice + 1;
	if ( codice > 99999)
		codice = 1;
}

bool CParcheggio::Uscita(int cod, int &pos)
{
	int i = Ricerca(cod);
	
	if(i == -1)
		return false;
	pos = i;
	posti[i] = 0;
		return true;
	
}

//ricerca del posto libero o del codice scontrino
int CParcheggio::Ricerca(int key)
{
	int i;
	for(i=0;i<N_MAX;i++)
	{
		if(posti[i]==key)
			break;
	}
	if(i == N_MAX)
		return -1;

	return i;
}

//parcheggio.h
#pragma once

#define N_MAX 5
class CParcheggio
{
	int posti[N_MAX];
	int codice;
public:
	CParcheggio(void);
	~CParcheggio(void);

	void Entrata(int &cod, int & pos);
	bool Uscita(int cod,int &pos);//ritorna true se la sbarra si alza

private:
	int Ricerca(int key);
};
