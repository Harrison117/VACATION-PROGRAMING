
/* USES "user_options.h" header files */

/*

PROGRAMMING EXERCISES FROM: <http://www.codeforwin.in/> 

WRITE A PROGRAM IN C TO PRINT THE FIRST N PRIME NUMBERS

	Input number of Primes: 4
	Output prime numbers between 4: 2, 3, 5, 7

DIFFICULTY: (**)

*/

#include <stdio.h>
#include "user_options.h"

void main(){
	
	int num, i, j, isPrime;
	
	printf("Enter any number: ");
	inputNumber(&num);
	
	for(i=1;i<num;i++){
		
		// resets the isPrime trigger
		isPrime = 1;
		
		// if 'i' is less than or equal to one, which is not a prime number
		if(i<=1) isPrime = 0;
		else{
			
			// check if 'i' is prime
			for(j=2;j<i;j++){
				if(i%j==0){
					isPrime = 0;
					break;
				}
			}
		}
		
		// if 'isPrime' is triggered, print the prime number
		if(isPrime) printf("%i ", i);
	}
}