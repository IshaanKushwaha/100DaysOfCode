//Write a program to find the LCM of two numbers.
#include <stdio.h>
#include <stdlib.h>

long long gcd_ll(long long a, long long b) {
    a = llabs(a);
    b = llabs(b);
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    long long a, b;
    printf("Enter two integers: ");
    scanf("%lld %lld", &a, &b);

    if (a == 0 || b == 0) {
        printf("LCM = 0 (because one of the numbers is 0)\n");
    } else {
        long long g = gcd_ll(a, b);
        long long lcm = llabs((a / g) * b); // safe order to reduce overflow
        printf("LCM = %lld\n", lcm);
    }
    return 0;
}
