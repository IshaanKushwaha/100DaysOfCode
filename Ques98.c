//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    printf("Enter your full name: ");
    if (!fgets(name, sizeof name, stdin)) return 0;

    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name), lastSpace = -1;
    for (int i = 0; i < len; i++)
        if (name[i] == ' ') lastSpace = i;

    for (int i = 0; i < len; i++) {
        if (i == 0 || (name[i-1] == ' ' && name[i] != ' ')) {
            if (i != lastSpace + 1)
                printf("%c. ", toupper((unsigned char)name[i]));
            else {
                printf("%s", &name[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
