#include <stdio.h>

int binary_search(int arr[], int size, int key);

int main() {
    int arr[] = {1, 2, 3, 5, 6, 9};
    int size = sizeof(arr) / sizeof(int);
    int key = 5;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    int index = binary_search(arr, size, key);

    if (index == -1) {
        printf("\nKey not found.");
    } else {
        printf("\nKey found at index %d.", index);
    }

    return 0;
}

int binary_search(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
