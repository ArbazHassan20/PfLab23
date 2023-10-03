#include <stdio.h>
int main(){
	int i,number,sfd=0;
	printf("enter a positive number \n");
	scanf("%d", &number);
	for(i= 1;i<number;i++){
		if(number % i==0){
			sfd=sfd+1;
		}
	}
	if(sfd==number){
		printf("%d is a perfect number", number);
	}else{
		printf("%d is not a perfect number", number);
	}
	return 0;
}
