// 2. Write a C program to multiply two matrices.
#include<stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int i, j, col, r, k;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    printf("Enter the numbers for 1st matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Enter the numbers for 2nd matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < col; j++)
            scanf("%d", &b[i][j]);
    }

    printf("The initial matrices:-\n");
    printf("MAT A\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < col; j++){
            printf("%d\t", a[i][j]);
        } 
        printf("\n");
    }

    printf("MAT B\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < col; j++){
            printf("%d\t", b[i][j]);
        }    
        printf("\n");
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < col; j++) {
            c[i][j] = 0;
            for (k = 0; k < col; k++){
                c[i][j] += a[i][k] * b[k][j];
            } 
        }
    }

    printf("The final matrices:-\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < col; j++){
            printf("%d\t", c[i][j]);
        } 
        printf("\n");
    }

    return 0;
}

