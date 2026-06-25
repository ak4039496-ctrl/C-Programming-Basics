#include <stdio.h>

int main() {
    // Program to check if a number is Neon using do...while loop

    int num, square, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    do {
        digit = square % 10;   // extract last digit
        sum = sum + digit;     // add digit to sum
        square = square / 10;  // remove last digit
    } while(square > 0);

    if(sum == num)
        printf("%d is a Neon number\n", num);
    else
        printf("%d is NOT a Neon number\n", num);

    return 0;
}

