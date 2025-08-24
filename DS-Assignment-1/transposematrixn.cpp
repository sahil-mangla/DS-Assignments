#include <stdio.h>

int main() {
    int A[10][10], transpose[10][10];
    int rows, cols, i, j;


    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);


    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }


    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            transpose[j][i] = A[i][j];
        }
    }


    printf("\nOriginal Matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


    printf("\nTransposed Matrix:\n");
    for (i = 0; i < cols; ++i) {
        for (j = 0; j < rows; ++j) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

