// 1. Write a C program to find the sum of all elements of an array.
#include<stdio.h>
void main(){
    int x,a[10],sum=0;
    printf("Enter a limit: ");
    scanf("%d",&x);
    printf("Enter the elements: ");
    for(int j=0;j<x;j++){
        printf("->");
        scanf("%d",&a[j]);
    }
    for(int i=0;i<x;i++){
        sum+=a[i];
    }
    printf("sum: %d",sum);
}