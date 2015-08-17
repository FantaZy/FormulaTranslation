#include "polynomial.h"


double calculatePolynomial(int a, int b, int c, int d, int x)
{
	return (d + x*(c + x*(b + (a*x))));
}