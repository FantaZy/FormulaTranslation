// formula_translation.cpp : Defines the entry point for the console application.
//

#include "mainMenu.h"
#include "twoPointsDistance.h"
#include "polynomial.h"
#include "exponential.h"
#include "gauss.h"
#include "frequency.h"
#include <stdio.h>
#include <math.h>


int x = 0, y = 0, a = 0, b = 0, c = 0, d = 0;
double dx = 0;

cplx tmp1;
cplx tmp2;
cplx res;
cplx resu;

void askForVariablesFor1()
{
	printf("Type value of x: \n");
	x = scanf("%d", &x);
	printf("Type value of y: \n");
	y = scanf("%d", &y);
	printf("Type value of a: \n");
	a = scanf("%d", &a);
	printf("Type value of b: \n");
	b = scanf("%d", &b);
	printf("Type value of c: \n");
	c = scanf("%d", &c);
}
void askForVariablesFor2()
{
	printf("Type value of x: \n");
	x = scanf("%d", &x);	
	printf("Type value of a: \n");
	a = scanf("%d", &a);
	printf("Type value of b: \n");
	b = scanf("%d", &b);
	printf("Type value of c: \n");
	c = scanf("%d", &c);
	printf("Type value of y: \n");
	d = scanf("%d", &d);
}
void askForVariablesFor3()
{
	printf("Type value of x: \n");
	dx = scanf("%d", &dx);
}
void askForVariablesFor4()
{
	printf("Type value of x: \n");
	x = scanf("%d", &x);
}
int main(void)
{
	
	char q = 'a';
	while (q != 'q')
	{
		
	//system("cls"); //clear screen
		displayMenu();
		q = getchar();
		switch (q)
		{
			case '1':
				askForVariablesFor1();				
				printf("Calculated distance is: %f", calculateDistance(x, y, a, b, c));
				break;
			case '2':
				askForVariablesFor2();
				printf("Polynomial result is: %f", calculatePolynomial(a, b, c, d, x));
				break;
			case '3':
				askForVariablesFor3();
				printf("Written exponential function result is: %.6f", exponential(dx));
				printf("\nEmbedded exp function result is: %.6f", exp(dx));
				break;
			case '4' :
				askForVariablesFor4();
				displayGaussResult();
				break;

			case '5':
				
				resu = calculateFrequency(3);
				
				printf("Calculated frequency: %.6f   %.6f\n\n", resu.real, resu.imag);

				tmp1.real = 2;
				tmp1.imag = 3;
				tmp2.real = 4;
				tmp2.imag = 5;
				res = multiplyComplex(tmp1, tmp2);
				printf("Mnozenie zespolonych: %.6f   %.6f \n", res.real, res.imag);
				res = addComplex(tmp1, tmp2);
				printf("Dodawanie zespolonych: %.6f   %.6f \n", res.real, res.imag);
				res = divide(tmp1, tmp2);
				printf("Dzielenie zespolonych: %.6f   %.6f \n", res.real,res.imag);
				
				break;
				

			default:
				break;
		}
	}
	
	return 0;
}

