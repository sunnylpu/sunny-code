#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int mat1[][10], int mat2[][10], int res[][10], int r1, int c1, int r2, int c2) {
    int i, j, k;

    // Check if matrices can be multiplied
    if (c1 != r2) {
        printf("Matrices cannot be multiplied\n");
        return;
    }

    // Multiply matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (k = 0; k < c1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[][10], int row, int col) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2;
    printf("Enter number of rows in matrix 1: ");
    scanf("%d", &r1);
    printf("Enter number of columns in matrix 1: ");
    scanf("%d", &c1);
    printf("Enter number of rows in matrix 2: ");
    scanf("%d", &r2);
    printf("Enter number of columns in matrix 2: ");
    scanf("%d", &c2);

    int mat1[10][10], mat2[10][10], res[10][10];

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    multiplyMatrices(mat1, mat2, res, r1, c1, r2, c2);

    printf("Matrix 1:\n");
    printMatrix(mat1, r1, c1);
    printf("Matrix 2:\n");
    printMatrix(mat2, r2, c2);
    printf("Resultant Matrix:\n");
    printMatrix(res, r1, c2);

    return 0;
}