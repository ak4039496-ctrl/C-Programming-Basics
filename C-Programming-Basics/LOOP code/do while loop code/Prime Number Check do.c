#include <stdio.h>

int main() {
    // Program to check if a number is Prime using do...while loop

    int num, i = 2, flag = 0;

    printf("Enter a number:- ");
    scanf("%d", &num);

    if(num <= 1) {
        printf("%d is NOT a Prime number\n", num);
        return 0;
    }

    do {
        if(num % i == 0) {
            flag = 1;   // found a divisor
            break;
        }
        i++;
    } while(i <= num / 2);

    if(flag == 0)
        printf("%d is a Prime number\n", num);
    else
        printf("%d is NOT a Prime number\n", num);

    return 0;
}

