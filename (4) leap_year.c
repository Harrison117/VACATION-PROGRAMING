
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
	
	if(year%4==0 && year%100!=0) printf("%i has a leap year!", year);
	else if (year%400==0) printf("%i has a leap year!", year);
	else printf("%i is a common year.", year);

}