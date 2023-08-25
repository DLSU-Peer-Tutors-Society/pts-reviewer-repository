/*

CCPROG1 Reviewer - Analysis 02

TOPICS REQUIRED: Pointers, Functions, Conditionals

---
You are given functions, swap and mystery.
Answer the following questions found on this comment:
[1] Which lines in mystery() will NEVER be executed,
	regardless of the user input?
[2] What condition is implied to execute the else
	clause in mystery() (line 70)?
[3] Provide a set of three inputs that makes
	nOne = 0, if possible. If not, answer "N/A"
[4] Provide a set of three inputs that makes
	nTwo = 0, if possible. If not, answer "N/A".
[5] Trace the program if your inputs are:
		nOne = 3,
		nTwo = 4,
		nInput = 9
	Specify the values that are printed at line 94. 

You CANNOT compile and execute the program to test
whether the function works as expected.
*/


#include <stdio.h>

void swap(int *pValOne, int *pValTwo)
{
	int temp;
	
	temp = *pValOne;
	*pValOne = *pValTwo;
	*pValTwo = temp;
}

void mystery (int *pA, int *pB, int n)
{
	if(*pA < *pB)
	{
		*pA = n + *pB;
		if(*pA < *pB)
			*pA = 0;
		else
			*pB -= *pA;
	}
	else if(*pA > *pB)
	{
		*pA = n - *pB;
		if(*pB < *pA)
		{
			n += *pA;
			*pB += *pA;
		}
		else
			*pB = n;
	}
	else if(*pA != *pB)
	{
		n = *pA;
		if(n == *pA)
			*pB = n;
		else
			*pB = 0;
		swap(pA, pB);
	}
	else
	{
		*pA = n + *pB;
		if(*pA < *pB)
		{
			swap(pA, pB);
			*pB = *pA - n;
		} else
		{
			*pB = *pA + n;
			swap(pA, pB);
		}
	}
}

int main()
{
	int nOne;
	int nTwo;
	int nInput;
	
	scanf("%d%d%d", &nOne, &nTwo, &nInput);
	mystery(&nOne, &nTwo, nInput);

	printf("%d %d\n", nOne, nTwo);
	return 0;
}
