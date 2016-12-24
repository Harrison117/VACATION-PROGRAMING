
/* USES "user_options.h" header file */

/*

PROGRAMMING EXERCISES FROM: <http://www.codeforwin.in/> 

WRITE A C PROGRAM TO CHECK LEAP YEAR OR NOT USING IF ELSE
	
	Example: 
		Input Year: 2004 
		Output: Leap year

DIFFICULTY: (*)

*/

#include <stdio.h>
#include "user_options.h"

void main(){
	
	int year;
	
	printf("Enter year: ");
	inputNumber(&year);
	
	// if year is divisible by four and not divisible by 100
	if(year%4==0 && year%100!=0) printf("%i has a leap year!", year);
	
	// if year is divisible by 400 instead
	else if (year%400==0) printf("%i has a leap year!", year);
	
	// if neither of the conditions above are met
	else printf("%i is a common year.", year);

}
