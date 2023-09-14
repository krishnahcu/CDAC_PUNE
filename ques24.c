#include <stdio.h>


void findMaxMin(int *arr, int size, int *max, int *min) {
    *max = *min = arr[0]; 
  for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

void multiplyBy5(int *arr, int size, int *result) {
    for (int i = 0; i < size; i++) {
        result[i] = arr[i] * 5;
    }
}

int main() {
    int arr[5];
    int max, min;
    int resultArr[5];

    printf("Enter five integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    findMaxMin(arr, 5, &max, &min);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    multiplyBy5(arr, 5, resultArr);
    printf("Result after multiplying each element by 5:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", resultArr[i]);
    }
    printf("\n");

    return 0;
}
