#include "Stack.h"

//Costruttore
CStack::CStack(void)
{
	sp = 0;
}

//Distruttore
CStack::~CStack(void)
{
}

//Funzione push
bool CStack::Push(int x)
{
	if(sp >= 10)
		return false;
	vet[sp] = x;
	sp++;
	return true;
}

//Funzione pop
bool CStack::Pop(int &x)
{
	if(sp == 0)
		return false;
	sp--;
	x = vet[sp];
	return true;
}
