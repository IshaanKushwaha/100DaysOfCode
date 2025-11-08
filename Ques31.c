//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n, binary = 0, base = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    int temp = n; // store for display

    while (n > 0) {
        remainder = n % 2;
        binary = binary + remainder * base;
        base = base * 10;
        n = n / 2;
    }

    printf("Binary of %d = %d\n", temp, binary);

    return 0;
}
