#include <stdio.h>   // Standard input-output library include

int main() {
    int a, b;   // Declare variables

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Bitwise AND
    printf("a & b = %d\n", a & b);

    // Bitwise OR
    printf("a | b = %d\n", a | b);

    // Bitwise XOR
    printf("a ^ b = %d\n", a ^ b);

    // Left shift
    printf("a << 1 = %d\n", a << 1);

    // Right shift
    printf("a >> 1 = %d\n", a >> 1);

    return 0;   // End program
}
\
