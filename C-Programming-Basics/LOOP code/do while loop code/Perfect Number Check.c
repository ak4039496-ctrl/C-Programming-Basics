#include <stdio.h>

int main() {
    // Program to check if a number is Perfect using do...while loop

    int num, i = 1, sum = 0;

    printf("Enter a number:- ");
    scanf("%d", &num);

    do {
        if(num % i == 0) {
            sum = sum + i;   // add divisor
        }
        i++;
    } while(i <= num / 2);   // only check up to half

    if(sum == num)
        printf("%d is a Perfect number\n", num);
    else
        printf("%d is NOT a Perfect number\n", num);

    return 0;
}

