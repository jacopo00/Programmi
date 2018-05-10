//2017-11-28 Primi esempi di polimorfismo 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Figura.h"
#include "Cerchio.h"
#include "Rettangolo.h"

void main (void)
{
	CFigura* forma[10];
	int ne;

	forma[0] = new CCerchio(10);
	forma[1] = new CRettangolo(3,2);
	forma[2] = new CCerchio(20);

	//stampa dell'aria delle varie figure
	ne = 3;
	for(int i = 0; i < ne; i++)
	{
		printf("Figura %i - Area %f\n", i,forma[i]->Area());
	}
	system("pause");

}