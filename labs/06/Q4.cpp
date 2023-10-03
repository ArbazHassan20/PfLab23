#include <stdio.h>

// Function to convert a number to its English representation
void numberToEnglish(int num) {
    switch (num) {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        default:
            if (num % 2 == 0)
                printf("Even");
            else
                printf("Odd");
    }
}

int main() {
    int a, b;
    
    // Input from the user
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    // Iterate from a to b and print the corresponding representation
    for (int i = a; i <= b; i++) {
        numberToEnglish(i);
        printf(", ");
    }

    return 0;
}

