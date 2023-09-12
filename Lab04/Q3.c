// 22k-4031
// programmer:Arbaz Hassan Narejo
// LAB4
// date:sep 12/2023 
#include <stdio.h>
int main(){
	int i=1,j=1;
	int x;
	printf("enter the value of x\n");
	scanf("%d", &x);
	do{
		x--;
	}while(x>=i);
	j=1;
	do{
		printf("*");
		printf(" ");
		j++;
	}while(j<=i);
	printf("\n");
	i++;
	while(j<=6);
	getch();
	return 0;
}

