
/* USES "user_math.h" and "user_options.h" header files */

/*

PROGRAMMING EXERCISES FROM: <http://www.codeforwin.in/> 

WRITE A C PROGRAM TO ENTER TWO NUMBERS AND PERFORM ALL ARITHMETIC OPERATIONS

	Write a C program to input two numbers and perform addition, subtraction, multiplication, division and modulus operations of two numbers. 

		Example: 
		Input first number: 10 
		Input second number: 5
		Output: 
		Sum = 15 
		Difference = 5
		Product = 50
		Quotient = 2
		Modulus = 0

DIFFICULTY: (*)

*/

#include <stdio.h>
#include "user_math.h"
#include "user_options.h"

void main(){
	
	int num1, num2, num3;
	float num4;
	
	printf("PRINT ARITHMETIC OF TWO NUMBERS!\n\n");
	
	printf("Enter first number: ");
	inputNumber(&num1);
	printf("Enter second number: ");
	inputNumber(&num2);
	
	addTwoNumber(num1,num2,&num3);
	printf("%i + %i = %i\n", num1, num2, num3);
	
	minusTwoNumber(num1,num2,&num3);
	printf("%i - %i = %i\n", num1, num2, num3);
	
	multiplyTwoNumber(num1,num2,&num3);
	printf("%i * %i = %i\n", num1, num2, num3);
	
	divideTwoNumber(num1,num2,&num4);
	if(num2!=0) printf("%i / %i = %f\n", num1, num2, num4);
	
	modulusTwoNumber(num1,num2,&num4);
	if(num2!=0) printf("%i % %i = %f\n", num1, num2, num4);
	
}