//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3;
    char file1[50], file2[50], file3[50];
    char ch;

    printf("Enter first filename: ");
    scanf("%s", file1);
    printf("Enter second filename: ");
    scanf("%s", file2);
    printf("Enter destination filename: ");
    scanf("%s", file3);

    f1 = fopen(file1, "r");
    f2 = fopen(file2, "r");
    f3 = fopen(file3, "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(f1)) != EOF)
        fputc(ch, f3);

    while ((ch = fgetc(f2)) != EOF)
        fputc(ch, f3);

    fclose(f1);
    fclose(f2);
    fclose(f3);

    printf("Files merged successfully into %s\n", file3);
    return 0;
}
