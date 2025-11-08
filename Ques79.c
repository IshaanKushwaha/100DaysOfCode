//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int n;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal:\n");
    for (int d = 0; d < n; d++) {
        for (int i = 0, j = d; j < n; i++, j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
