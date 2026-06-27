#include <stdio.h>   // Standard input-output library include

int main() {
    int a;   // Declare variable

    // Input a number
    printf("Enter a number:- ");
    scanf("%d", &a);

    // Demonstrate += operator (add and assign)
    a += 5;   // Equivalent to a = a + 5
    printf("After a += 5, value = %d\n", a);

    // Demonstrate -= operator (subtract and assign)
    a -= 3;   // Equivalent to a = a - 3
    printf("After a -= 3, value = %d\n", a);

    // Demonstrate *= operator (multiply and assign)
    a *= 2;   // Equivalent to a = a * 2
    printf("After a *= 2, value = %d\n", a);

    // Demonstrate /= operator (divide and assign)
    a /= 2;   // Equivalent to a = a / 2
    printf("After a /= 2, value = %d\n", a);

    return 0;   // End program
}

