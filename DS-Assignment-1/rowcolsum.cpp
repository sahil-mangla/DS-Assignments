#include <stdio.h>

int main() {
    int A[10][10];
    int rows, cols, i, j;
    int rowSum, colSum;


    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);


    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }


    printf("\nMatrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


    printf("\nSum of each row:\n");
    for (i = 0; i < rows; i++) {
        rowSum = 0;
        for (j = 0; j < cols; j++) {
            rowSum += A[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }


    printf("\nSum of each column:\n");
    for (j = 0; j < cols; j++) {
        colSum = 0;
        for (i = 0; i < rows; i++) {
            colSum += A[i][j];
        }
        printf("Column %d: %d\n", j + 1, colSum);
    }

    return 0;
}

