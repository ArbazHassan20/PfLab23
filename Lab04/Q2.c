// 22k-4031
// programmer:Arbaz Hassan Narejo
// LAB4
// date:sep 12/2023 
#include <stdio.h>
#include <math.h>
int main(){
	int i,j,k;
	int num=0,sum=0;
	printf("enter i\n");
	scanf("%d", &i);
	while(j<i){
		printf("enter k\n");
		scanf("%d", &k);
		num=pow(k,2);
		sum=sum+num;
		j++;
	}
	printf("the square answer is %d", sum);

}
