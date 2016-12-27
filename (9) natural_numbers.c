
/* USES "user_options.h" header files */

/*

PROGRAMMING EXERCISES FROM: <http://www.codeforwin.in/> 

WRITE A PROGRAM IN C TO PRINT THE FIRST N NATURAL NUMBERS NUMBERS

DIFFICULTY: (*)

*/

#include <stdio.h>
#include "user_options.h"

void main(){
	
	int i, input_num;
	
	printf("Print numbers up to: ");
	scanf("%i", &input_num);
	
	for(i=1;i<=input_num;i++) printf("%i ", i);
	
}