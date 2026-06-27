#include <stdio.h>   // Standard input-output library include

int main() {
    int a = 5, b = 2;   // Declare integer variables
    float result;       // Declare float variable

    // Without type casting (integer division)
    result = a / b;  
    printf("Without casting: %f\n", result);

    // With type casting (convert to float before division)
    result = (float)a / b;  
    printf("With casting: %f\n", result);

    return 0;   // End program
}

