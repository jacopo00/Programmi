#ifndef _LISTA_
#define _LISTA_

#include <stdlib.h>
#include <stdio.h>
#include "Info.h"

//Tipo nodo lista 
typedef struct _SNodo
{
	SInfo info;
	struct _SNodo* next;
}SNodo;

//prototipi
void InsTesta(SNodo** p, SNodo* n);
void InsCoda(SNodo**p, SNodo** u, SNodo* n);
void InsOrd(SNodo** p, SNodo* n);
SNodo* EstraiTesta(SNodo** p);
void EliminaLista(SNodo**p);


#endif