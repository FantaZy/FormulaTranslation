#include "twoPointsDistance.h"
#include <stdlib.h>
#include <math.h>

double calculateDistance(int x, int y, int a, int b, int c)
{
	double result = 0;
	result = abs(a*x + b*y - c) / sqrt(pow(a,2)+pow(b,2));
	return result;
}
