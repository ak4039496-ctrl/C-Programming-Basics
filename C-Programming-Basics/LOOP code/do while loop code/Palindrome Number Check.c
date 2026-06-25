#include <stdio.h>

int main() {
    // Program to check if a number is Palindrome using do...while loop

    int num, original, rev = 0, digit;

    printf("Enter a number:- ");
    scanf("%d", &num);

    original = num;

    do {
        digit = num % 10;          // extract last digit
        rev = rev * 10 + digit;    // build reversed number
        num = num / 10;            // remove last digit
    } while(num > 0);

    if(original == rev)
        printf("%d is a Palindrome number\n", original);
    else
        printf("%d is NOT a Palindrome number\n", original);

    return 0;
}

