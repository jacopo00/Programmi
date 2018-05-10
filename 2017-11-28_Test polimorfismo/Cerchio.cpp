#include "Cerchio.h"


CCerchio::CCerchio(float r)
{
	raggio = r;
}


CCerchio::~CCerchio(void)
{
}

float CCerchio::Area()
{
	return raggio*raggio*3.14;
}
