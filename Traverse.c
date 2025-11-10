#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nTraversing the array:\n");
    for(i = 0; i < n; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}
