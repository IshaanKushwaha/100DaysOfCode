//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0)
        printf("Positive number.\n");
    else if (num < 0)
        printf("Negative number.\n");
    else
        printf("Number is zero.\n");

    return 0;
}
