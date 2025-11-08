//Count frequency of a given character in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[500], ch;
    int freq = 0;
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    printf("Enter character to count: ");
    ch = getchar();
    if (ch == '\n') ch = getchar(); // handle leftover newline

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        if (s[i] == ch) freq++;

    printf("Character '%c' occurred %d times\n", ch, freq);
    return 0;
}
