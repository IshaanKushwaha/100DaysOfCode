//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char s[500];
    int freq[26] = {0};
    printf("Enter a string (lowercase): ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
            if (freq[s[i] - 'a'] == 2) {
                printf("First repeating character: %c\n", s[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase letter found.\n");
    return 0;
}
