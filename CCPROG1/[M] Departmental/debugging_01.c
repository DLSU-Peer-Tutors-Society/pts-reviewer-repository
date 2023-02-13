/*

CCPROG1 Reviewer - Debugging 01

TOPICS REQUIRED: Functions, Conditional Constructs

You are given a program that computes for the slope
given two coordinates. Identify the ten errors in
the program and write down the line with the error
and the correct code to replace the line.

You CANNOT compile and execute the program to test
whether the program works as expected.

*/
#include <stdio.h>

char identifySlope (double dSlope)
{
	if(dSlope > 0)
	{
		if(dSlope == 0)
			printf("Zero Slope!");
		else
			printf("Positive Slope!");
	} else
		print("Negative Slope!");
}

double computeSlope (int x1, int y1, int x2, int y2)
{
	return y2 - y1 / x2 - x1 * 1.0;
}

int main ()
{
	int x1. y1;
	int x2, y2;
	
	printf("Input Coordinate One: ");
	scanf("%d %d", &x2, &y2);
	
	printf("Input Coordinate Two: ");
	scanf("%d %d", x2, y2);
	
	if(x1 = x2)
		printf("Slope does not exist");
	else
		identifySlope(computeSlope(x1, x2, y1, y2));
		
	return O;	
}
