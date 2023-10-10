#include <stdio.h>


int main() {
    int N;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int arr[N];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[N];
    for (int i = 0; i < N; i++) {
        freq[i] = -1; 
    }

    for (int i = 0; i < N; i++) {
        int count = 1; 

        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }

        if (freq[i] != 0) {
            freq[i] = count; 
        }
    }

    printf("Element\tFrequency\n");
    for (int i = 0; i < N; i++) {
        if (freq[i] != 0) {
            printf("%d\t%d\n", arr[i], freq[i]);
        }
    }

    return 0;
}

