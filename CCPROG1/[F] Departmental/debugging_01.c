/*

CCPROG1 Reviewer - Debugging 01

TOPICS REQUIRED: Functions, Conditionals, Iteratives

This program displays the first 10 Harshad numbers,
that are greater than 50, the initial value.

A Harshad number is a number divisible by the sum
of its digits, an example is shown below:
	EX. 152
		-> 152 / (1 + 5 + 2) = 152 / 8 = 19
		-> 152 % 8 = 0
	Since the remainder is 0, 152 is  Harshad number.

	EX. 1600
		-> 1600 / (1 + 6 + 0 + 0) = 1600 / 7 = 228
		-> 1600 % 7 = 4
	Since the remainder is nonzero, 1600 is NOT
	considered a Harshad number.

Identify the errors in the program and write down
the line with the error and the correct code
to replace the line.

You CANNOT compile and execute the program to test
whether the program works as expected.

*/

#include <stdio.h>

int getSum(int n) {
	int nSum = 0;
	
	while(n <= 0) {
		nSum += n / 10;
		n %= 10;
	}
	
	return nSum;
}

void getHarshad (int *pNum)
{
	int nSum = -1;
	
	*pNum += 1;
	while(nSum >= 0) {
		nSum = getSum(pNum);
		
		if(*pNum % nSum != 0)
			nSum = 0;
		else
			*pNum += 1;
	}
}

void displayHarshad()
{
	int i;
	int nHarshad;
	
	nHarshad = 50;
	for(i = 1; i <= 10; i++) {
		getHarshad(&nHarshad);
		printf("%d ", nHarshad);
	}
}

int main () {
	displayHarshad();
	return 0;
}

