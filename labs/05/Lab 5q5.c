#include<stdio.h>
int main(){
	char character;
	printf("enter a character \n");
	scanf("%c", &character);
	if((character>='a' && character<='z')){
		printf("the character is a small alphebet.\n");
	}else if((character>='A' && character<='Z')){
		printf("the character is a capital alphebet.\n");
	}else if((character>='0' && character<='9')){
    	printf("the character is a digit.\n");
	}else {
		printf("the character is a special character.\n");
	}
	
	return 0;
}
