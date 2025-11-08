//Print the initials of a name.
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[200];
    printf("Enter your full name: ");
    if (!fgets(name, sizeof name, stdin)) return 0;

    printf("Initials: ");
    for (int i = 0; name[i] != '\0'; i++) {
        if (i == 0 || (name[i-1] == ' ' && name[i] != ' '))
            printf("%c ", toupper((unsigned char)name[i]));
    }
    printf("\n");
    return 0;
}
