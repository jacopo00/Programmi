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

