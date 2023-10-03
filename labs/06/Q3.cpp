#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate GCD (Greatest Common Divisor) using Euclid's algorithm
    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Calculate LCM (Least Common Multiple)
    lcm = (num1 * num2) / gcd;

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}

