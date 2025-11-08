//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0) {
        printf("GCD not defined for 0 and 0.\n");
    } else {
        printf("GCD = %d\n", gcd(x, y));
    }
    return 0;
}
