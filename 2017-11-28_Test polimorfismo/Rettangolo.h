#pragma once
#include "figura.h"

class CRettangolo : public CFigura
{
	float b,h;
public:
	CRettangolo(float base = 0,float alt = 0);
	~CRettangolo(void);

	float Area();
};

