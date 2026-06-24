#include <stdio.h>          // Standard input-output library include

int main() {                // Main function starts
    int a, b;               // Declare two integer variables

    printf("Enter 1st  number:- ");   // Ask user for input
    scanf("%d", &a);
	printf("Enter 2nd number:- ");   
	scanf("%d", &b);

    int sum = a + b;        // Perform addition

    printf("Sum => %d\n", sum);       // Print result

    return 0;               // End program
}

