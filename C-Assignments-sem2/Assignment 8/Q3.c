// 3. Write a C Program to find the sum of two matrices using function.
#include <stdio.h>

void ADD(int r, int c, int arr1[10][10], int arr2[10][10], int sum[10][10])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main()
{
    int r, c;
    int arr1[10][10], arr2[10][10], sum[10][10];

    printf("Enter the number of rows of the matrices: ");
    scanf("%d", &r);
    printf("Enter the number of columns of the matrices: ");
    scanf("%d", &c);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    ADD(r, c, arr1, arr2, sum);

    printf("The sum of the two matrices is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
