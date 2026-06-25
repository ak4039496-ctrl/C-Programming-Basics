#include <stdio.h>

int main() {
    // Program to find product of digits using do...while loop

    int num, digit, product = 1;

    printf("Enter a number:- ");
    scanf("%d", &num);

    do {
        digit = num % 10;        // extract last digit
        product = product * digit; // multiply digit
        num = num / 10;          // remove last digit
    } while(num > 0);

    printf("Product of digits = %d\n", product);

    return 0;
}

