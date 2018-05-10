#pragma once

//Tipo frazione
class CFraz
{
	int n,d;
	char s[16];
	

public:
	int Cfraz(char s[]);
	CFraz(int num = 0, int den=1);
	~CFraz(void);

	//metodi
	CFraz(char s[]);
	char* Get();
	void Set(int num = 0, int den=1);
	CFraz operator+(CFraz fadd);
	CFraz operator-(CFraz fsott);
	CFraz operator*(CFraz fpro);
	CFraz operator/(CFraz fdiv);

protected:
	//metodi protetti 
	int mcd();
	void MinTer();
};

