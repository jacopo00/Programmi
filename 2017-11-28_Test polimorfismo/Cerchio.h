#pragma once
#include "figura.h"

class CCerchio : public CFigura
{
	float raggio;

public:
	CCerchio(float r = 0);
	~CCerchio(void);

	float Area();
};

