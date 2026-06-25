#include <stdio.h>

int main() {
    // Program to generate Fibonacci series using do...while loop

    int n, a = 0, b = 1, next, count = 1;

    printf("Enter number of terms:- ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    do {
        printf("%d ", a);       // print current term
        next = a + b;           // calculate next term
        a = b;                  // shift values
        b = next;
        count++;
    } while(count <= n);

    return 0;
}

