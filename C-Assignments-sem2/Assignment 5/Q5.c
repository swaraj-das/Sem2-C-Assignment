// 5. Write a C program to search the any elements from an array using linear search technique.
#include<stdio.h>
void main(){
    int n,arr[10],target;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the values of array:");
    for(int i=0;i<n;i++){
        printf("->");
        scanf("%d",&arr[i]);
    }
    printf("Enter target: ");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("Element position: %d  index: %d",i+1,i);
            break;
        }
    if(n==i){
        printf("Element not found");
    }
    }
}