// 22k-4031
// programmer:Arbaz Hassan Narejo
// LAB4
// date:sep 12/2023 
#include <stdio.h>
#include<math.h>
main(){
	int a,b,c,i;
	float f,x,y;
	printf("enter the value of a\n");
	scanf("%d", &a);
	printf("enter the value of b\n");
	scanf("%d", &b);
	printf("enter the value of c\n");
	scanf("%d", &c);
	i=(b*b)-(4*a*c);
	f=sqrt(i);
	x=(-b*+f)/(2*a);
	y=(-b-f)/(2*a);
	printf("the 2 solutions are x1 %f and x2 %f",x,y);
}
