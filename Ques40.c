//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>

int main() {
    char bin[1024];

    printf("Enter a binary number: ");
    if (scanf("%1023s", bin) != 1) return 0;

    int len = strlen(bin);
    // validate input
    for (int i = 0; i < len; ++i) {
        if (bin[i] != '0' && bin[i] != '1') {
            printf("Invalid binary number. Only 0 and 1 allowed.\n");
            return 0;
        }
    }

    // compute 1's complement (flip bits)
    for (int i = 0; i < len; ++i) {
        bin[i] = (bin[i] == '0') ? '1' : '0';
    }

    printf("1's complement = %s\n", bin);
    return 0;
}
