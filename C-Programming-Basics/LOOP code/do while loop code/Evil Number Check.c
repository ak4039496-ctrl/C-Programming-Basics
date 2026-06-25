#include <stdio.h>

int main() {
    // Program to check if a number is Evil using do...while loop

    int num, count = 0, temp;

    printf("Enter a number:-");
    scanf("%d", &num);

    temp = num;

    do {
        if(temp % 2 == 1) {   // check if last bit is 1
            count++;
        }
        temp = temp / 2;      // shift right (divide by 2)
    } while(temp > 0);

    if(count % 2 == 0)
        printf("%d is an Evil number\n", num);
    else
        printf("%d is NOT an Evil number\n", num);

    return 0;
}

