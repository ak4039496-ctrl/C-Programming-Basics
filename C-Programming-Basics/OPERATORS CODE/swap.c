#include <stdio.h>   // Standard input-output library include

int main() {
    int a, b, temp;   // Declare three variables: a, b (input), temp (for swapping)

    // Input first number
    printf("Enter first number:- ");
    scanf("%d", &a);

    // Input second number
    printf("Enter second number:- ");
    scanf("%d", &b);

    // Display values before swapping
    printf("Before swapping:- a = %d, b = %d\n", a, b);

    // Swap logic using third variable
    temp = a;   // Store value of a in temp
    a = b;      // Assign value of b to a
    b = temp;   // Assign value of temp (original a) to b

    // Display values after swapping
    printf("After swapping:- a = %d, b = %d\n", a, b);

    return 0;   // End program
}

