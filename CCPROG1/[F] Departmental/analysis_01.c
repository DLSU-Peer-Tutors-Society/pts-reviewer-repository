/*

CCPROG1 Reviewer - Analysis 01

TOPICS REQUIRED: Functions, Conditionals, Iteratives

---
You are given an unknown function. All that is known
is that it prints 10 numbers. Assume that the maximum
value of nInput is 10 only.

Answer the following questions found on this comment:
[1] What does the printf function display when:
		i = 4,
		nInput = 3
[2] What does the printf function display when:
		i = 3,
		nInput = 2
[3] What does the unknown function do?
[4] Overall, what does the program do?

You CANNOT compile and execute the program to test
whether the function works as expected.
*/


#include <stdio.h>

int unknown (int nVal, int nInput)
{
	int i, bOkay;
	
	bOkay = 1;
	while(nVal != 0) {
		i = nVal % 10;
		
		if(i >= nInput)  {
			bOkay = 0;
			nVal = 0;
		} else nVal /= 10;
	}
	
	return bOkay;
}

int main ()
{
	int i, nVal, nInput;
	nVal = 0;
	
	scanf("%d", &nInput);

	for(i = 1; i <= 10; i++) {
		printf("%d ", nVal);
		
		nVal++;
		
		while(!unknown(nVal, nInput))
			nVal++;
	}
	
	return 0;
}

