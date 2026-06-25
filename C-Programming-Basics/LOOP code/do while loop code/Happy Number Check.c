#include <stdio.h>

int main() {
    // Program to check if a number is Happy using do...while loop

    int num, digit, sum, temp;

    printf("Enter a number:- ");
    scanf("%d", &num);

    temp = num;

    do {
        sum = 0;
        do {
            digit = temp % 10;           // extract digit
            sum = sum + (digit * digit); // add square of digit
            temp = temp / 10;
        } while(temp > 0);

        temp = sum;   // replace number with sum

    } while(temp != 1 && temp != 4); // loop until 1 (Happy) or 4 (Not Happy)

    if(temp == 1)
        printf("%d is a Happy number\n", num);
    else
        printf("%d is NOT a Happy number\n", num);

    return 0;
}

