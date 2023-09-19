#include<stdio.h>
int main(){
	unsigned char num;
	int i;
	printf("enter an 8 bit number (0-255): ");
	scanf("%hhu", &num);
	printf("the actual number in binary: ");
	for(i=7;i>=0;i--){
		printf("%d", (num>>i) & 1);
	}
	printf("\n");
	if(num&(1<<3)){
		num&=~(1<<3);
	}
		if(num&(1<<6)){
		num&=~(1<<6);
   }
   printf("the new number in binary is : ");
   for(i=7;i>=0;i--){
		printf("%d", (num>>i) & 1);
	}
	printf("\n");
	printf("Resulting number is : %hhu",num);
 
return 0;
}
