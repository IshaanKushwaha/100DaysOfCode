//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char s[500];
    printf("Enter a sentence: ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    int len = strlen(s);
    if (s[len - 1] == '\n') s[len - 1] = '\0';

    char *wordStart = s;
    for (int i = 0; i <= len; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverse(wordStart, &s[i - 1]);
            wordStart = &s[i + 1];
        }
    }

    printf("Reversed words: %s\n", s);
    return 0;
}
