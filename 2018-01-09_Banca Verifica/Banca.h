#pragma once
#include <memory.h>

//define
#define MAX_C 5

//dichiarazione struttura
struct SCass{
	char ident[40];
	char data[12];
}
SCass vet[MAX_C];

//classe
class CBanca{
	SCass vet[MAX_C];
	char numeri[128];
public:
	 Banca(void);
	~Banca(void);
	CBanca(){memset(vet,0,sizeof(vet));}
	char* Affitta(char ident[],char data[],int n);
	char* NumeroChiavi(char ident[]);
	char* Rilascia(int n);
protected:
	int Scansione();
};

