

void addTwoNumber(int num1, int num2, int *sum){ *sum = num1 + num2; }

void minusTwoNumber(int num1, int num2, int *dif){ *dif = num1 - num2; }

void multiplyTwoNumber(int num1, int num2, int *prod){ *prod = num1 * num2; }

void divideTwoNumber(int num1, int num2, float *quo){ 
	if(num2==0) printf("INVALID DIVISION!\n");
	else *quo = num1 / num2; 
}

void modulusTwoNumber(int num1, int num2, float *quo){ 
	if(num2==0) printf("INVALID DIVISION!\n");
	else *quo = num1 % num2; 
}
