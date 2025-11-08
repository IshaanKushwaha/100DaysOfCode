//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[50];
    char word[100], longest[100] = "";
    
    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while (fscanf(fp, "%s", word) != EOF) {
        if (strlen(word) > strlen(longest))
            strcpy(longest, word);
    }

    fclose(fp);

    printf("Longest word: %s\n", longest);
    return 0;
}
