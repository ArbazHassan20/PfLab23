#include<stdio.h>
//function to swap 2 integer//
void swapinteger(int n1, int n2){
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
	printf("%d %d",n1,n2);
}
int main(){
	int x,y;
	printf("enter two numbers:\n");
	scanf("%d %d",&x,&y);
	printf("the two numbers are %d and %d\n",x,y);
	printf("after applying swap function:\n");
	swapinteger(x,y); //calling funtion
	
	
}
