#include <stdio.h>   // Standard input-output library include

int main() {
    char ch;   // Declare a character variable

    // Input a character from user
    printf("Enter a character:- ");
    scanf("%c", &ch);

    // Check if character is an alphabet (A-Z or a-z)
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is an Alphabet\n", ch);
    }
    // Check if character is a digit (0-9)
    else if(ch >= '0' && ch <= '9') {
        printf("%c is a Digit\n", ch);
    }
    // Otherwise it is a special character
    else {
        printf("%c is a Special Character\n", ch);
    }

    return 0;   // End program
}

