//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char s[500];
    printf("Enter a sentence: ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    int maxLen = 0, currLen = 0, start = 0, bestStart = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && s[i] != '\n') {
            if (currLen == 0) start = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                bestStart = start;
            }
            currLen = 0;
        }
    }

    printf("Longest word: ");
    for (int i = 0; i < maxLen; i++) printf("%c", s[bestStart + i]);
    printf("\n");

    return 0;
}
