#include <stdio.h>
int main (){
	float quotient,d;
	printf("enter the dividend \n");
	scanf("%f ", &d);
	printf("enter the quotient \n");
	scanf("%f ", &quotient);
    quotient=0.0;
	if(quotient==0){
		printf("error divison by 0 is not allowed ");
		}else {
			while(d>=quotient){
			quotient-=d;	
				quotient++;
			}
			printf("Quotient : %f\n ", quotient);
		} 
	
	return 0;
}
