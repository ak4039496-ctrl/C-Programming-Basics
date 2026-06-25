#include <stdio.h>

int main() {
    // Program to find sum of digits using do...while loop

    int num, digit, sum = 0;

    printf("Enter a number:-");
    scanf("%d", &num);

    do {
        digit = num % 10;     // extract last digit
        sum = sum + digit;    // add digit to sum
        num = num / 10;       // remove last digit
    } while(num > 0);

    printf("Sum of digits => %d\n", sum);

    return 0;
}

