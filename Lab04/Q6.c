// 22k-4031
// programmer:Arbaz Hassan Narejo
// LAB4
// date:sep 12/2023 
#include <stdio.h>

int main()
{
	int n = 5, rows = 1, columns;	
	while (rows <= n) {
		columns = n;
		while (columns > rows) {
			printf(" ");
			columns--;
		}
		printf("*");
		columns = 1;
		while (columns < (rows - 1) * 2) {
			printf(" ");
			columns++;
		}
		if (rows == 1) {
			printf("\n");
		}
		else {
			printf("*\n");
		}
		rows++;
	}
	rows = n - 1;
	while (rows >= 1) {
		columns = n;
		while (columns > rows) {
			printf(" ");
			columns--;
		}
		printf("*");
		columns = 1;
		while (columns < (rows - 1) * 2) {
			printf(" ");
			columns++;
		}
		if (rows == 1) {
			printf("\n");
		}
		else {
			printf("*\n");
		}
		rows--;
	}
	return 0;
}
