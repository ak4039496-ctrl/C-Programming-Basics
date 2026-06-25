#include <stdio.h>

int main() {
    // Program to check if a number is Armstrong using do...while loop

    int num, original, digit, sum = 0;

    printf("Enter a number:- ");
    scanf("%d", &num);

    original = num;

    do {
        digit = num % 10;                  // extract last digit
        sum = sum + (digit * digit * digit); // cube and add
        num = num / 10;                    // remove last digit
    } while(num > 0);

    if(sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is NOT an Armstrong number\n", original);

    return 0;
}

