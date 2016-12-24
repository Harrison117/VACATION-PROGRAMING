
/* USES "user_options.h" header files */

/*

PROGRAMMING EXERCISES FROM: <http://www.codeforwin.in/> 

WRITE A PROGRAM IN C TO ENTER ANY NUMBER AND CHECK WHETHER THE NUMBER IS PRIME NUMBER OR NOT

	Example: 
	Enter any number: 17 
	Output: Number is Prime number 

DIFFICULTY: (**)

*/

#include <stdio.h>
#include "user_options.h"

void main(){
	
	int num, i, isPrime = 1;
	
	printf("Enter any number: ");
	inputNumber(&num);
	
	if(num<=1) isPrime = 0;
	else{
		for(i=2;i<num;i++){
			if(num%i==0){
				isPrime = 0;
				break;
			}
		}
	}
	
	if(isPrime) printf("%i is a Prime number!", num);
	else printf("%i is NOT a Prime number...", num);
	
}
