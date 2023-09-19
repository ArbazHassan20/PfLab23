#include<stdio.h>
int main(){
	char operator;
	float num1,num2,result;
	printf("enter an operator (+,-,*,/): ");
	scanf("%c", &operator);
	printf("enter 2 numbers ");
	scanf("%f %f", &num1,&num2);
	switch(operator){
		case '+':
			result=num1 + num2;
			printf("the result is %f\n", result);
			break;
		case '-':
			result=num1 - num2;
			printf("the result is %f\n", result);
			break;	
		case '*':
			result=num1 * num2;
			printf("the result is %f\n", result);
			break;	
		case '/':
			result=num1 / num2;
			printf("the result is %f\n", result);
			break;
			default:
			printf("invalid operator entered,\n");	
		}
	
	return 0;
}
