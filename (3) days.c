
/* USES "user_math.h" and "user_options.h" header files */

/*

PROGRAMMING EXERCISES FROM: <http://www.codeforwin.in/> 

WRITE A C PROGRAM TO CONVERT DAYS INTO YEARS, WEEKS AND DAYS

	Write a C program to input number of days from user and convert it to years, weeks and days.
	C program to add two numbers and display their sum as output. 
	
	1 YEAR = 365 DAYS (IGNORE LEAP YEARS)
	1 WEEK = 7 DAYS
	
		Example: 
		Input days: 373
		Output = 1 year/s, 1 week/s and 1 day/s 
	
DIFFICULTY: (*)

*/

#include <stdio.h>
#include "user_math.h"
#include "user_options.h"

void main(){
	
	int input_days, days = 0, weeks = 0, years = 0;
	
	printf("Enter number of days: ");
	inputNumber(&input_days);
	
	// loop checks for years in the input days
	while(input_days>365){ 
		input_days -= 365; // decrement input according to days in a year
		years += 1; // increments year per 365 days
	}
	
	// loop checks for weeks in the input days
	while(input_days>7){
		input_days -= 7; // decrement input according to days in a week
		weeks += 1; // increments week per 7 days
	}
	
	// assigns the remaining days to the 'days' counter
	days = input_days;
	
	printf("%i year/s, %i week/s, %i day/s", years, weeks, days);
	
}