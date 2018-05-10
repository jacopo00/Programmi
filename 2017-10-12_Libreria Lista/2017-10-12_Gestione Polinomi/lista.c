#include "Lista.h"

//Inserisce sulla lista p il nodo n
void InsTesta(SNodo** p, SNodo* n)
{
	n->next = *p;
	*p = n;
}

//Inserisce sulla lista p il nodo n sulla coda u della lista
void InsCoda(SNodo**p, SNodo** u, SNodo* n)
{
	if (*p == n)
		*p = n;
	else
		(*u)->next = n;

	*u = n;
	n->next = 0;
}

//Inserire sulla lista p il nodo n in maniera ordinata
void InsOrd(SNodo** p, SNodo* n)
{
	SNodo* cor;
	SNodo* prec;

	if(*p == 0)
		InsTesta(p, n);
	else
		if((*p)->info.esp < n->info.esp)
			InsTesta(p, n);
		else
		{
			prec = *p;
			cor = prec->next;
			while(cor != 0)
			{
				if(cor->info.esp < n->info.esp)
					break;
				prec = cor;
				cor = cor->next;
			}

			InsTesta(&prec->next, n);
		}
}

//Estrai il primo nodo della lista p e lo restituisce come uscita
SNodo* EstraiTesta(SNodo** p)
{
	SNodo* n;
	
	n = *p;
	if(*p != 0 )
		*p = (*p)->next;
	return n;
}

//Estrae tutti i nodi dalla lista e recupera memoria
void EliminaLista(SNodo**p)
{
	SNodo* n;
	while(*p != 0)
	{
		n = EstraiTesta(p);
		free(n);
	}
}