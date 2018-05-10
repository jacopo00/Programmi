//2018-01-09-Correzione compito in classe
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "Banca.h"

void main (void)
{
	CBanca banca;
	char* ident;
	char* data;
	int n;
	char ch;
	do{
		system("cls");
		printf("[+] Affitta\n");
		printf("[-] Rilascia\n");
		printf("[*] Esci\n");
		ch = _getch();
		switch(ch)
		{
			case '+':
				printf("Credenziali");
				scanf("%s",&ident);
				printf("Data");
				scanf("%s",&data);
				printf("Numero cassette");
				scanf("%i",&n);
				banca.Affitta(ident, data, n);
				
			case '-':

		}

	}while(ch != '*');
}


