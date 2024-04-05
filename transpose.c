#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void transpose(int mat[MAX_ROWS][MAX_COLS], int transposed[MAX_COLS][MAX_ROWS], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transposed[j][i] = mat[i][j];
        }
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int transposed[MAX_COLS][MAX_ROWS];
    int rows, cols, i, j;

    printf("Enter the number of rows and columns of the matrix (max 10x10): ");
    scanf("%d %d", &rows, &cols);

    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Exceeded maximum size. Please keep the matrix dimensions within 10x10.\n");
        return 1;
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Transpose the matrix
    transpose(matrix, transposed, rows, cols);

    // Display transposed matrix
    printf("\nTransposed Matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
