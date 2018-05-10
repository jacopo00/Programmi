#pragma once
class CStack
{
	int sp;
	int vet[10];
public:
	CStack(void);	//Costruttore
	~CStack(void);	//Distruttore
	bool Push(int x);	
	bool Pop (int &x);
};

