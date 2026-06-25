#include <stdio.h>

int main() {
    // Program to count vowels in a string using do...while loop

    char str[100];
    int i = 0, count = 0;

    printf("Enter a string:- ");
    scanf("%s", str);   // input string (no spaces)

    do {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U') {
            count++;
        }
        i++;
    } while(str[i] != '\0');   // loop until end of string

    printf("Total vowels = %d\n", count);

    return 0;
}

