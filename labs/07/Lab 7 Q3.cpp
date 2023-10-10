#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int originalNumber = number;
    int sum = 0;

    
    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("The sum of digits of %d is %d\n", originalNumber, sum);

    return 0;
}

