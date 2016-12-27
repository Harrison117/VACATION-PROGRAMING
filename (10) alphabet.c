
/* USES "user_options.h" header files */

/*

PROGRAMMING EXERCISES FROM: <http://www.codeforwin.in/> 

WRITE A PROGRAM IN C TO PRINT THE ALPHABET UP TO N (USER INPUT)

DIFFICULTY: (*)

*/

#include <stdio.h>
#include "user_options.h"

void main(){
	
	int i, ascii;
	char letter;
	
	printf("Print the alphabet up to: ");
	scanf("%c", &letter);
	
	ascii = letter;
	
	for(i=97;i<=ascii;i++) printf("%c ", i);
	
}