//Count vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[500];
    int vowels = 0, consonants = 0;
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char ch = s[i];
        if (isalpha((unsigned char)ch)) {
            char l = tolower((unsigned char)ch);
            if (l=='a'||l=='e'||l=='i'||l=='o'||l=='u') vowels++;
            else consonants++;
        }
    }

    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}
