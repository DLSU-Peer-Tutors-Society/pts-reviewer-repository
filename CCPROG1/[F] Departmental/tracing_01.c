/*
												  
CCPROG1 Reviewer - Tracing 01

TOPICS REQUIRED: Functions, Conditionals, Iteratives

You are give the function traceShape.Trace the following
program and determine the output of the program when the
given inputs in main() are:
	[1] X = 3, Y = 3
	[2] X = 5, Y = 9

In this exercise, you are NOT allowed to compile
and execute the program.

*/

#include <stdio.h>

void traceShape (int nA, int nC)
{
	int i, j, nB;
	
	nB = 2 * nA - 1;
	for(i = 1; i <= nA; i++) {
		for(j = 1; j <= nB; j++) {
			if((j == 1 || j == nB)) {
				printf("%d", nC);
				nC++;
			} else if(i == j) {
				printf("%d", nC);
				nC++;
			} else if(i + j == nB + 1) {
				printf("%d", nC);
				nC++;
			} else
				printf("-");
			
			if(nC > 9)
				nC %= 10;
		}
		printf("\n");
	}
}

int main ()
{
	traceShape(X, Y);	
	return 0;
}
