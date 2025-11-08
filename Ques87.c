//Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[500];
    int spaces=0, digits=0, special=0;
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    for (int i=0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == ' ') spaces++;
        else if (isdigit((unsigned char)s[i])) digits++;
        else if (isprint((unsigned char)s[i]) && !isalnum((unsigned char)s[i])) special++;
    }

    printf("Spaces = %d\nDigits = %d\nSpecial characters = %d\n", spaces, digits, special);
    return 0;
}
