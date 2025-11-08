//Write a program to find the product of odd digits of a number.
#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);

    n = llabs(n);
    long long product = 1;
    int found = 0;

    if (n == 0) {
        // special case: digit 0 is not odd, so product = 0 as no odd digits
        printf("No odd digits found. Product = 0\n");
        return 0;
    }

    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 1) {
            product *= d;
            found = 1;
        }
        n /= 10;
    }

    if (found)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found. Product = 0\n");

    return 0;
}
