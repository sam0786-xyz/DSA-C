#include <stdio.h>

int main() {
    int ar[5];
    int key, found = 0;

    printf("Enter the elements: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ar[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < 5; i++) {
        if (ar[i] == key) {
            found = 1;
            printf("Element %d found at index %d\n", key, i);
            break; // No need to continue searching after finding the element
        }
    }

    if (!found) {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
