//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s1[200], s2[200];
    printf("Enter first string: ");
    fgets(s1, sizeof s1, stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof s2, stdin);

    int freq[256] = {0};
    for (int i=0; s1[i]!='\0' && s1[i]!='\n'; i++)
        freq[(unsigned char)tolower(s1[i])]++;

    for (int i=0; s2[i]!='\0' && s2[i]!='\n'; i++)
        freq[(unsigned char)tolower(s2[i])]--;

    for (int i=0; i<256; i++)
        if (freq[i] != 0) {
            printf("Not anagrams.\n");
            return 0;
        }

    printf("Strings are anagrams.\n");
    return 0;
}
