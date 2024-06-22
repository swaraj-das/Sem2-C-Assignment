// 1. Write a C program to add two matrices of order M × N
#include <stdio.h>

int main() {
    int matrix1[10][10], matrix2[10][10], sum[10][10], m, n;

    printf("Enter the number of rows (M): ");
    scanf("%d", &m);
    printf("Enter the number of columns (N): ");
    scanf("%d", &n);

    // Reading elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Reading elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding the two matrices
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the resultant matrix
    printf("Resultant matrix after addition:\n");
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
