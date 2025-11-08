//Check if a string is a palindrome.
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[500];
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    int len = 0;
    while (s[len] != '\0' && s[len] != '\n') len++;

    int i = 0, j = len - 1, isPal = 1;
    while (i < j) {
        char a = tolower((unsigned char)s[i]);
        char b = tolower((unsigned char)s[j]);
        if (a != b) { isPal = 0; break; }
        i++; j--;
    }

    if (isPal) printf("String is a palindrome.\n");
    else printf("String is not a palindrome.\n");

    return 0;
}
