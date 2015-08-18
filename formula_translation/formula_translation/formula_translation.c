// formula_translation.cpp : Defines the entry point for the console application.
//

#include "mainMenu.h"
#include "twoPointsDistance.h"
#include "polynomial.h"
#include "exponential.h"
#include "gauss.h"
#include <stdio.h>
#include <math.h>

int x = 0, y = 0, a = 0, b = 0, c = 0, d = 0;
double dx = 0;

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
		
		system("cls"); //clear screen
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
				

			default:
				break;
		}
	}
	
	return 0;
}

