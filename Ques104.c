//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int x = -1;  // pivot integer

    for (int i = 1; i <= n; i++) {
        int sumLeft = 0, sumRight = 0;

        // sum from 1 to i
        for (int j = 1; j <= i; j++) {
            sumLeft += j;
        }

        // sum from i to n
        for (int j = i; j <= n; j++) {
            sumRight += j;
        }

        if (sumLeft == sumRight) {
            x = i;
            break;
        }
    }

    printf("Pivot integer: %d\n", x);

    return 0;
}
