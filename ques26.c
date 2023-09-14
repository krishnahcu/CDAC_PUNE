#include <stdio.h>
void insertElement(int *arr, int *size, int position, int element) {
    if (position < 0 || position > *size) {
        printf("Invalid position. Element not inserted.\n");
        return;
    }

    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    (*size)++;
}

int main() {
    int size, position, element;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert the element (0 to %d): ", size);
    scanf("%d", &position);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    insertElement(arr, &size, position, element);

    printf("Updated array after inserting %d at position %d:\n", element, position);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
