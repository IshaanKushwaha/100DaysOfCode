//Replace spaces with hyphens in a string.
#include <stdio.h>

int main() {
    char s[500];
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        if (s[i] == ' ') s[i] = '-';

    printf("Modified string: %s", s);
    return 0;
}
