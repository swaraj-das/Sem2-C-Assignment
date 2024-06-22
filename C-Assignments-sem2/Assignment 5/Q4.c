// 4. Write a C program to sort the all elements of an array in ascending order using selection sort technique.
#include<stdio.h>
void main(){
    int n,arr[10],min,temp;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
     printf("Enter the values of array:");
    for(int i=0;i<n;i++){
        printf("->");
        scanf("%d",&arr[i]);
    } 

    for(int i=0;i<n-1;i++){
        min=i;
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[min]){
                    min=j;
                }
                if(i!=min){
                    temp=arr[i];
                    arr[i]=arr[min];
                    arr[min]=temp;
                }
            }
    } 
    printf("Array after sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");  
}