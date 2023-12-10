#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
void readMatrix(int matrix[MAX_ROWS][MAX_COLS], int m, int n) {
    printf("SUCHITRA RANA\n");
    printf("Enter the elements of the matrix (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int m, int n) {
    printf("Matrix (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void multiplyMatrix(int result[MAX_ROWS][MAX_COLS], int matrix1[MAX_ROWS][MAX_COLS], int m1, int n1, int matrix2[MAX_ROWS][MAX_COLS], int m2, int n2) {
    if (n1 != m2) {
        printf("Matrix multiplication is not possible. Columns of matrix1 must be equal to rows of matrix2.\n");
        return;
    }
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
void addMatrix(int result[MAX_ROWS][MAX_COLS], int matrix1[MAX_ROWS][MAX_COLS], int m, int n, int matrix2[MAX_ROWS][MAX_COLS]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void subtractMatrix(int result[MAX_ROWS][MAX_COLS], int matrix1[MAX_ROWS][MAX_COLS], int m, int n, int matrix2[MAX_ROWS][MAX_COLS]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}
void transposeMatrix(int result[MAX_ROWS][MAX_COLS], int matrix[MAX_ROWS][MAX_COLS], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}
int main() {
    int choice, m, n, m1, n1, m2, n2;
    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS];
    int result[MAX_ROWS][MAX_COLS];
    printf("Enter the number of rows for matrix 1: ");
    scanf("%d", &m1);
    printf("Enter the number of columns for matrix 1: ");
    scanf("%d", &n1);
    readMatrix(matrix1, m1, n1);
    printf("Enter the number of rows for matrix 2: ");
    scanf("%d", &m2);
    printf("Enter the number of columns for matrix 2: ");
    scanf("%d", &n2);
    readMatrix(matrix2, m2, n2);
    while (1) {
        printf("1) Read matrix elements and display\n");
        printf("2) Matrix Multiplication and display\n");
        printf("3) Addition of matrix and display\n");
        printf("4) Subtraction of Matrix and display\n");
        printf("5) Transpose of Matrix and display\n");
        printf("6) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displayMatrix(matrix1, m1, n1);
                displayMatrix(matrix2, m2, n2);
                break;
            case 2:
                multiplyMatrix(result, matrix1, m1, n1, matrix2, m2, n2);
                displayMatrix(result, m1, n2);
                break;
            case 3:
                if (m1 != m2 || n1 != n2) {
                    printf("Matrix addition is not possible. Matrices must have the same dimensions.\n");
                } else {
                    addMatrix(result, matrix1, m1, n1, matrix2);
                    displayMatrix(result, m1, n1);
                }
                break;
            case 4:
                if (m1 != m2 || n1 != n2) {
                    printf("Matrix subtraction is not possible. Matrices must have the same dimensions.\n");
                } else {
                    subtractMatrix(result, matrix1, m1, n1, matrix2);
                    displayMatrix(result, m1, n1);
                }
                break;
            case 5:
                transposeMatrix(result, matrix1, m1, n1);
                displayMatrix(result, n1, m1);
                transposeMatrix(result, matrix2, m2, n2);
                displayMatrix(result, n2, m2);
                break;
            case 6:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    return 0;
}
