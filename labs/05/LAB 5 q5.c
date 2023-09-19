#include<stdio.h>
int main(){
	int hour;
	printf("enter the current time in 24 hour format : ");
	scanf("%d", &hour);
	if(hour>=5 && hour<12){
		printf("Good Morning \n");
	}else if(hour>=12 && hour<18){
		printf("Good evening \n");
	}else if(hour>=18 && hour<24){
		printf("Good night \n");
	}else{
		printf("invalid time input again  \n");
	}
	return 0;
	
}
	

