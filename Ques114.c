//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int maxLen = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        int len = 0;
        for (int j = i; j < n; j++) {
            if (visited[(int)s[j]])
                break;
            visited[(int)s[j]] = 1;
            len++;
        }
        if (len > maxLen)
            maxLen = len;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}
