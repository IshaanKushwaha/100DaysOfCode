//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

int main() {
    char s[500];
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - ('a' - 'A'); // convert to uppercase
    }

    printf("Uppercase: %s", s);
    return 0;
}
