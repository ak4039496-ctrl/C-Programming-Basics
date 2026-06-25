#include <stdio.h>

int main() {
    // Program to reverse digits using do...while loop

    int num, rev = 0, digit;

    printf("Enter a number:-");
    scanf("%d", &num);

    do {
        digit = num % 10;        // extract last digit
        rev = rev * 10 + digit;  // build reversed number
        num = num / 10;          // remove last digit
    } while(num > 0);

    printf("Reversed number = %d\n", rev);

    return 0;
}

