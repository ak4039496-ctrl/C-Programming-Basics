#include <stdio.h>

int main() {
    // Program to check if a number is Strong using do...while loop

    int num, original, digit, sum = 0, fact, i;

    printf("Enter a number:- ");
    scanf("%d", &num);

    original = num;

    do {
        digit = num % 10;   // extract last digit

        // calculate factorial of digit
        fact = 1;
        i = 1;
        do {
            fact = fact * i;
            i++;
        } while(i <= digit);

        sum = sum + fact;   // add factorial to sum
        num = num / 10;     // remove last digit
    } while(num > 0);

    if(sum == original)
        printf("%d is a Strong number\n", original);
    else
        printf("%d is NOT a Strong number\n", original);

    return 0;
}

