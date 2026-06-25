#include <stdio.h>   // Standard input-output library include

int main() {
    char ch;   // Declare a character variable

    // Input a character from user
    printf("Enter a character:- ");
    scanf("%c", &ch);

    // Print ASCII value using type casting (char ? int)
    printf("ASCII value of %c => %d\n", ch, (int)ch);

    return 0;   // End program
}

