// 3. Write a C program to find transpose of a matrix.
#include<stdio.h>
int main(){
    int arr[10][10],temp,r,c;
    printf("Enter row size: ");
    scanf("%d",&r);
    printf("Enter the coloums: ");
    scanf("%d",&c);
    printf("Enter elements of matrix: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    } 

    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    printf("The transpose matrix is: \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}