//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10) {
        printf("Swapped number = %d\n", num); // single-digit case
        return 0;
    }

    lastDigit = num % 10;
    digits = (int)log10(num);   // total digits - 1
    firstDigit = num / pow(10, digits);

    swappedNum = lastDigit * pow(10, digits)
               + (num % (int)pow(10, digits)) / 10 * 10
               + firstDigit;

    printf("Swapped number = %d\n", swappedNum);
    return 0;
}
