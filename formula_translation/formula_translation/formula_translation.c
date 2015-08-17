// formula_translation.cpp : Defines the entry point for the console application.
//

#include "mainMenu.h"
#include "twoPointsDistance.h"
#include <stdio.h>




int x = 0, y = 0, a = 0, b = 0, c = 0;




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
				double tmp;
				tmp = calculateDistance(x, y, a, b, c);
				printf("Calculated distance is: %e", tmp);
				break;
			default:
				break;
		}
	}
	
	return 0;
}

