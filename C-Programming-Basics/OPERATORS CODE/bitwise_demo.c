#include <stdio.h>   // Standard input-output library include

int main() {
    int a, b;   // Declare two integer variables

    // Input two numbers
    printf("Enter two numbers:- ");
    scanf("%d %d", &a, &b);

    // Bitwise AND operator
    printf("a & b = %d\n", a & b);

    // Bitwise OR operator
    printf("a | b = %d\n", a | b);

    // Bitwise XOR operator
    printf("a ^ b = %d\n", a ^ b);

    return 0;   // End program
}

