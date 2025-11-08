//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, i, sum = 0, odd;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        odd = 2 * i - 1; // generates odd numbers: 1, 3, 5, 7, ...
        sum += odd;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
