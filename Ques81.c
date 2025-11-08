//Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char s[500];
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    int len = 0;
    while (s[len] != '\0' && s[len] != '\n') len++; // manual length
    printf("Length = %d\n", len);
    return 0;
}
