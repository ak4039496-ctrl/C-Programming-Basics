#include <stdio.h>

int main() {
    // Program to calculate factorial using do...while loop

    int num, i = 1, fact = 1;

    printf("Enter a number:- ");
    scanf("%d", &num);

    do {
        fact = fact * i;   // multiply step by step
        i++;
    } while(i <= num);

    printf("Factorial of %d = %d\n", num, fact);

    return 0;
}

