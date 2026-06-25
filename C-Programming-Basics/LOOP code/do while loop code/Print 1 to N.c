#include <stdio.h>

int main() {
    // Program to print numbers from 1 to N using do...while loop

    int n, i = 1;

    printf("Enter a number:- ");
    scanf("%d", &n);

    do {
        printf("%d\n", i);
        i++;
    } while(i <= n);

    return 0;
}

