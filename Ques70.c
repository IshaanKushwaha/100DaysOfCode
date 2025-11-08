//Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k (number of rotations): ");
    scanf("%d", &k);
    k %= n; // handle if k > n

    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", temp[i]);

    printf("\n");
    return 0;
}
