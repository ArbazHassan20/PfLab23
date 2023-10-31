/*
name: Arbaz Hassan Narejo
ID:22k-4031
Date:31/10/23
Description:function for finding GCD first using loops and then using recursion.
*/
#include <stdio.h>
// using recursion (Euclidean algorithm)
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);
    printf("GCD using recursion for %d and %d is %d\n", num1, num2, result);

    return 0;
}
