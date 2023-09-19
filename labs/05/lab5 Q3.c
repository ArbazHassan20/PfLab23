#include<stdio.h>
int main(){
	char option;
	printf("Are you sure to delet? [Y/y]/[N/n]: ");
	scanf("%c", &option);
	switch(option){
		case 'Y':
		case 'y':
			printf("print successful.\n");
			break;
		case 'N';
		case 'n';
		printf("delete canceled.\n");
		break;	
		default:
			printf("choose the right option.\n");
		
	}
		
return 0;	
}
