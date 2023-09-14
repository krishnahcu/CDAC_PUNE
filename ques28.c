#include <stdio.h>
void Accept(int matrix[3][3]) {
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void Display(int matrix[3][3]) {
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
void MultiplyMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0; // Initialize result cell to 0
            for (int k = 0; k < 3; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[3][3], matrix2[3][3], product[3][3];

    printf("Enter the first 3x3 matrix:\n");
    Accept(matrix1);
    Display(matrix1);

    printf("Enter the second 3x3 matrix:\n");
    Accept(matrix2);
    Display(matrix2);
    MultiplyMatrices(matrix1, matrix2, product);
    printf("Product of the two matrices:\n");
    Display(product);

    return 0;
}
