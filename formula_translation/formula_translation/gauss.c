#include "gauss.h"
#include <math.h>
#include <stdio.h>

# define PI 3.141592653589793238462643383279502884L /* pi */

double calculateGauss(double x)
{
	return 0.5 * PI * exp(x*x*0.5);
}

void displayGaussResult()
{
	printf("Standard Gaussian density function \n \n");
	printf("********************************** \n \n");
	printf("value of x \t \t value of y \n");
	for (double i = 0; i <= 1; i += 0.1)
	{
		double tmp = calculateGauss(i);
		printf("    %.2f     \t\t %.6f \n" ,i ,tmp);
	}
}