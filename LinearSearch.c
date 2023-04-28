#include <stdio.h>

int linear_search(int arr[], int size, int key);

int main() {
    int arr[] = {5, 2, 9, 3, 1, 6};
    int size = sizeof(arr) / sizeof(int);
    int key = 3;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    int index = linear_search(arr, size, key);

    if (index == -1) {
        printf("\nKey not found.");
    } else {
        printf("\nKey found at index %d.", index);
    }

    return 0;
}

int linear_search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
