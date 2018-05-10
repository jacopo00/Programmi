#include <stdio.h>
#include <stdlib.h>
#include "Fraz.h"

void main (void)
{
	CFraz fadd,fsott,fpro,fdiv;
	CFraz f1("5/2");
	CFraz f2(3);
	CFraz f3("10/4");
	
	
	

	printf("Dimensione della classe: %i byte\n",sizeof(CFraz));

	printf("f1 = %s\n",f1.Get());
	printf("f2 = %s\n",f2.Get());
	printf("f3 = %s\n",f3.Get());

	//somma
	fadd=f1+f2;
	printf("%s+%s = %s\n",f1.Get(), f2.Get(), fadd.Get());
	
	//sottrazione
	fsott=f1-f2;
	printf("%s-%s = %s\n",f1.Get(), f2.Get(), fsott.Get());

	//prodotto
	fpro=f1 * f2;
	printf("%s*%s = %s\n",f1.Get(), f2.Get(), fpro.Get());

	//divisione
	fdiv=f1 / f2;
	printf("%s / %s = %s\n",f1.Get(), f2.Get(), fdiv.Get());

	system("pause");

}