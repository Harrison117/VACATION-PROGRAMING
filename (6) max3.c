
/* USES "user_options.h" header files */

/*

PROGRAMMING EXERCISES FROM: <http://www.codeforwin.in/> 

WRITE A C PROGRAM TO FIND MAXIMUM BETWEEN THREE NUMBERS

	Write a C program to find maximum number between three numbers using if else. 

	Example:
		Input first number: 10 
		Input second number: 50
		Input third number: 120
		Output maximum: 120

DIFFICULTY: (1/2 *)

*/

#include <stdio.h>
#include "user_options.h"

void main(){
	
	int num1, num2, num3;
	
	printf("MAXIMUM OF TWO NUMBERS\n\n");
	
	printf("Enter first number: ");
	inputNumber(&num1);

	printf("Enter second number: ");
	inputNumber(&num2);
	
	printf("Enter third number: ");
	inputNumber(&num3);
	
	// if the first number is greater than the second and third number
	if(num1>num2 && num1>num3) printf("%i is the maximum!",num1);
	
	// else if the second number is greater than the third
	else if(num2>num3) printf("%i is the maximum!",num2);
	
	// else the third number is the greater number
	else printf("%i is the maximum!",num3);
	
}