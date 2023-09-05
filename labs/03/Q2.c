#include <stdio.h>

int main(){
	int a,b,c,v;
	printf("enter the length \n");
	scanf("%d",&a);
	printf("enter the width \n");
	scanf("%d",&b);
	printf("enter the height \n");
	scanf("%d",&c);
	v=a*b*c;
	printf("the volume is \n %d", v);
	return 1;
}
