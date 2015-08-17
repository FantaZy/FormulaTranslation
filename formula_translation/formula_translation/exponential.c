#include "exponential.h"

double exponential(int x)
{
	return 1 + x * (1 + x*((1 / 2) + x*((1 / 6) + x*((1 / 24) + (1 / 120)*x))));
}