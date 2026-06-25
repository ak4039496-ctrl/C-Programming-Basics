#include <stdio.h>   // Standard input-output library include

int main() {
    char ch;   // Declare a character variable

    // Input a character from user
    printf("Enter a character:- ");
    scanf("%c", &ch);

    // Check if character is a vowel using logical OR operator
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a Vowel\n", ch);
    } else {
        printf("%c is a Consonant\n", ch);
    }

    return 0;   // End program
}

