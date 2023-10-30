/*
												  
CCPROG1 Reviewer - Hands - On 

TOPICS REQUIRED: Iterative Constructs, C Expressions

I. Introduction
The digits of a number can be shifted, depending on
its shift value. Generally, the shifting of digits
where the shift value is positive, follows this rule:

0 -> 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 0

If the shift value is negative, the direction is done
in reverse:

0 <- 1 <- 2 <- 3 <- 4 <- 5 <- 6 <- 7 <- 8 <- 9 <- 0


II. Task
Your task is to create the function shift(), taking
the input to be shifted (nInput) and the shift value
(nShift). The function will return the shifted value.

A maximum of ONE function can be created (aside from
shift() or main()) to aid in solving the problem.

You CANNOT touch the main() function.

III. Sample Test Cases
The following test cases can be implemented to check
the correctness of the program:

[TEST CASE 01]
Input Number: 127509
Shift Number: 4
Shifted Number: 561943

[TEST CASE 02]
Input Number: 127509
Shift Number: -4
Shifted Number: 783165

[TEST CASE 03]
Input Number: -127509
Incorrect Input!
Input Number: -1
Thank you!
*/
 
#include <stdio.h>

int roundShift (int nShift) {
	int newShift = nShift * -1;
	
	while(newShift % 10 != 0)
		newShift++;
		
	return newShift;
}

int shift(int nInput, int nShift) {
	int newNum = 0;
	int nTen = 1;
	int newDigit;
	
	while(nInput > 0) {
		if((nInput % 10 + nShift) >= 0)
			newDigit = (nInput % 10 + nShift) % 10;
		else
			newDigit = roundShift(nShift) + (nInput % 10 + nShift);
		
		newNum += (newDigit * nTen);
		nTen *= 10;
		nInput /= 10;
	}
	
	return newNum;
}

int main() {
	int nInput;
	int nSE;
	
	nInput = 0;
	while(nInput != -1) {
		printf("Input Number: ");
		scanf("%d", &nInput);
		
		if(nInput < 0 && nInput != -1)
			printf("Incorrect Input!\n");
		else if (nInput >= 0 && nInput != -1){
			printf("Shift Number: ");
			scanf("%d", &nSE);
			printf("Shifted Number: %d\n\n", shift(nInput, nSE));
		} else
			printf("Thank you!");
	}
	
	return 0;	
}
