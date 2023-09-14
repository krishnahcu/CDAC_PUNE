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
void Transpose(int matrix[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix[j][i];
        }
    }
}

void AddMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int matrix1[3][3], matrix2[3][3], transpose[3][3], sum[3][3];

    printf("Enter the first matrix:\n");
    Accept(matrix1);
    Display(matrix1);
    Transpose(matrix1, transpose);
    printf("Transpose of the first matrix:\n");
    Display(transpose);

    printf("Enter the second matrix:\n");
    Accept(matrix2);
    Display(matrix2);
    AddMatrices(matrix1, matrix2, sum);
    printf("Sum of the two matrices:\n");
    Display(sum);

    return 0;
}
