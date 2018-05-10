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

