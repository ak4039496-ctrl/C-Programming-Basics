#include <stdio.h>

int main() {
    // Program to find sum of first N natural numbers using do...while loop

    int n, i = 1, sum = 0;

    printf("Enter a number:-");
    scanf("%d", &n);

    do {
        sum = sum + i;   // add current number
        i++;
    } while(i <= n);

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}

