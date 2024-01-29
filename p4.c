#include <stdio.h>
#include <stdlib.h>

int main() {
    // Example usage of malloc
    int *arr1 = (int *)malloc(5 * sizeof(int));

    if (arr1 == NULL) {
        printf("Memory allocation failed for arr1.\n");
        return 1;
    }

    // Initializing values
    for (int i = 0; i < 5; ++i) {
        arr1[i] = i + 1;
    }

    printf("Memory allocated using malloc:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Example usage of calloc
    int *arr2 = (int *)calloc(5, sizeof(int));

    if (arr2 == NULL) {
        printf("Memory allocation failed for arr2.\n");
        return 1;
    }

    printf("Memory allocated using calloc (initialized to 0):\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Example usage of realloc
    int *arr3 = (int *)realloc(arr1, 8 * sizeof(int));

    if (arr3 == NULL) {
        printf("Memory reallocation failed for arr3.\n");
        return 1;
    }

    printf("Memory reallocated using realloc:\n");
    for (int i = 0; i < 8; ++i) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    // Example usage of free
    free(arr2);
    printf("Memory freed for arr2.\n");

    free(arr3);
    printf("Memory freed for arr3.\n");

    return 0;
}
