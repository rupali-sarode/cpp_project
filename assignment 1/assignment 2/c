#include <stdio.h>

int binarySearch(int arr[], int size, int element) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;   

        if (arr[mid] == element) {
            return mid;
        }
        if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[size];

    printf("Enter %d elements in sorted order:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter the element you want to search: ");
    scanf("%d", &element);

    int indSearch = binarySearch(arr, size, element);

    if (indSearch != -1) {
        printf("The element %d was found at index %d\n", element, indSearch);
    } else {
        printf("The element %d was not found in the array.\n", element);
    }

    return 0;
}
