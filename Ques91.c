//Remove all vowels from a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[500], result[500];
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    int j = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char c = tolower((unsigned char)s[i]);
        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
            result[j++] = s[i];
    }
    result[j] = '\0';
    printf("Without vowels: %s\n", result);
    return 0;
}
