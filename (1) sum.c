
/* USES "user_math.h" and "user_options.h" header files */

/*

PROGRAMMING EXERCISES FROM: <http://www.codeforwin.in/> 

WRITE A C PROGRAM TO ENTER TWO NUMBERS AND FIND THEIR SUM

	Write a program in C to enter two numbers from user and calculate their sum. 
	C program to add two numbers and display their sum as output. 
	
	Example:
		Input first number: 20 
		Input second number: 10 
		Output: Sum = 30

DIFFICULTY: (*)

*/

#include <stdio.h>
#include "user_math.h"
#include "user_options.h"

void inputNumber(int *num){ scanf("%i", num); }

void addTwoNumber(int num1, int num2, int *sum){ *sum = num1 + num2; }

void main(){
	
	int num1, num2, sum;
	printf("PRINT SUM OF TWO NUMBERS!\n\n");
	printf("Enter first number: ");
	inputNumber(&num1);
	printf("Enter second number: ");
	inputNumber(&num2);
	addTwoNumber(num1,num2,&sum);
	printf("%i + %i = %i", num1, num2, sum);
	
}