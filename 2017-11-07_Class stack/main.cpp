#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Stack.h"

//main
void main()
{
	CStack s;
	int x;
	char ch;

	system("cls");
	printf("[+] Inserisce, [-] Estrae, [*] Termina\n\n");
	system ("pause");
	//test
	do
	{
		ch = _getch();
		switch(ch)
		{
			case '+':
				x = rand();
				if (s.Push(x) == 0)
					printf("Stack overflow\n");
				else
					printf("Inserito %i\n", x);
				break;

			case '-':
				if (s.Pop(x) == 0)
					printf("Stack underflow\n");
				else
					printf("Estratto %i\n", x);
				break;
		}

	}while(ch != '*');
}