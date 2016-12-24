
/* USES "user_options.h" header files */

/*

PROGRAMMING EXERCISES FROM: <http://www.codeforwin.in/> 

WRITE A C PROGRAM TO FIND MAXIMUM BETWEEN TWO NUMBERS

	Write a C program to find maximum between two numbers using if else. 
	C program to enter two numbers from user and find maximum between two numbers using if else.
		
	Example: 
		Input first number: 2
		Input second number: 23
		Output maximum: 23

DIFFICULTY: (1/2 *)

*/

#include <stdio.h>
#include "user_options.h"

void main(){
	
	int num1, num2;
	
	printf("MAXIMUM OF TWO NUMBERS\n\n");
	
	printf("Enter first number: ");
	inputNumber(&num1);

	printf("Enter second number: ");
	inputNumber(&num2);
	
	if(num1>num2) printf("%i is the maximum!",num1);
	else printf("%i is the maximum!",num2);
	
}