//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int num = 1, den = 2;  // numerator starts at 1, denominator at 2

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2;  // odd numbers
        den += 2;  // even numbers
    }

    printf("Sum of series = %.4f\n", sum);
    return 0;
}
