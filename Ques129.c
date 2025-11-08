//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    long size;
    char ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);

    printf("Reversed file contents:\n");
    for (long i = size - 1; i >= 0; i--) {
        fseek(fp, i, SEEK_SET);
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
