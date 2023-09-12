// 22k-4031
// programmer:Arbaz Hassan Narejo
// LAB4
// date:sep 12/2023 
#include <stdio.h>
int main(){
	int d1,m1,y1;
	int d2,m2,y2;
	printf("enter the date of birth for person 1 (DD  MM YYYY):");
	scanf("%d %d %d ", &d1,&m1,&y1);
	printf("enter the date of birth for person 2 (DD  MM YYYY):");
	scanf("%d %d %d ", &d2,&m2,&y2);
	if(y1<y2){
		printf("the person 1 is older: \n");
	}else if(y1>y2){
		printf("the person 2 is older: \n");
	}else if(m1<m2){
		printf("the person 1 is older: \n");
	}else if(m1>m2){
	     printf("the person 2 is older: \n");
	}else if(d1<d2){
		printf("the person 1 is older: \n");
	}else if(d1>d2){
		printf("the person 2 is older: \n");
	}else 
	{
		printf("both person have the same date of birth\n");
	}
	
	return 0;
	
}
