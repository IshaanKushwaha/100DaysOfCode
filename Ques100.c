//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) return 0;
    s[strcspn(s, "\n")] = 0;

    int n = strlen(s);
    printf("All substrings:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++)
                putchar(s[k]);
            printf("\n");
        }
    }
    return 0;
}
