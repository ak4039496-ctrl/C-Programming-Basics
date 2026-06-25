#include <stdio.h>

int main() {
    // Program to check if a number is Harshad (Niven) using do...while loop

    int num, digit, sum = 0, original;

    printf("Enter a number:-");
    scanf("%d", &num);

    original = num;

    do {
        digit = num % 10;   // extract last digit
        sum = sum + digit;  // add digit to sum
        num = num / 10;     // remove last digit
    } while(num > 0);

    if(original % sum == 0)
        printf("%d is a Harshad number\n", original);
    else
        printf("%d is NOT a Harshad number\n", original);

    return 0;
}

