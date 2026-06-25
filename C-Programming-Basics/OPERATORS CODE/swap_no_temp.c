#include <stdio.h>   // Standard input-output library include

int main() {
    int a, b;   // Declare two variables

    // Input first number
    printf("Enter first number:- ");
    scanf("%d", &a);

    // Input second number
    printf("Enter second number:- ");
    scanf("%d", &b);

    // Display values before swapping
    printf("Before swapping:\n");
	printf("a=> %d\n",a);
	printf("b=> %d\n",b);

    // Swap logic without third variable (using + and - operators)
    a = a + b;   // Step 1: Add both numbers and store in 'a'
    b = a - b;   // Step 2: Subtract new 'a' with 'b' to get original 'a'
    a = a - b;   // Step 3: Subtract new 'a' with new 'b' to get original 'b'

    // Display values after swapping
    printf("After swapping:\n");
	printf("a=>%d\n",a);
	printf("b=>%d\n",b);
    return 0;   // End program
}

