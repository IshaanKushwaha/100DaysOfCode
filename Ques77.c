//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n, flag = 1;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int a[n][n], diag[n];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++)
        diag[i] = a[i][i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (diag[i] == diag[j])
                flag = 0;

    if (flag)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
