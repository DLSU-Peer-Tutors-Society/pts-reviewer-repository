/*
												  |
CCPROG1 Reviewer - Tracing 01

TOPICS REQUIRED: Functions, Variables, C Expressions

You are given four functions, A, B, C, and D.

Trace the following program and determine the
outputs of the following five integer variables
declared in main(). In this exercise, you are
NOT allowed to compile and execute the program.

*/

#include <stdio.h>
#define NUMONE 8
#define NUMTWO 0

int D (int a, int b)
{
	return a * b + b / a;
}

int C (int a)
{
	return -1 * a;
}

int B ()
{
	return 5 * (4 + 1) / 7;
}

int A ()
{
	return 10 - 3 % 2;
}

int main ()
{
	int nOne, nTwo, nThree, nFour, nFive;
	
	nOne   = A() + B() % 12 - NUMTWO;
	nTwo   = C(A()) / B() + C(-1);
	nThree = C(6) + A() != B();
	nFour  = D(A(), C(-3)) == (B() - A());
	nFive  = !((C(NUMONE) <= NUMTWO + D(2, 3)) == (A() - B()));
	
	printf("%d %d %d %d %d", nOne, nTwo, nThree, nFour, nFive);
	return 0;
}
