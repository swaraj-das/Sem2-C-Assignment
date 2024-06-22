// 3. Write a C program to sort the all elements of an array in ascending order using bubble sort technique.
#include<stdio.h>
void main(){
    int n,arr[10],temp;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the values of array:");
    for(int i=0;i<n;i++){
        printf("\n->");
        scanf("%d",&arr[i]);
    }
    printf("Array after sorting: ");
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%4d",arr[i]);
    }
}