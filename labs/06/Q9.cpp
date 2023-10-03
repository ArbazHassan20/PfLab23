#include <stdio.h>
int main(){
	int n;
	printf("enter the number of elements");
	scanf("%d", &n);
	int arr[n];
	printf("enter the elements of array");
	int i;
	for(i = 0; i < n;i++){
		scanf("%d", &arr[i]);
		
	}
	int max = arr[0];
	int min = arr[0];
	for(i=1; i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
		min=arr[i];
	}
		
	printf("the maximum number : %d\n ",max);
	printf("the minimum number : %d\n ",min);
	
	return 0;	
	}
	
}
	
	
