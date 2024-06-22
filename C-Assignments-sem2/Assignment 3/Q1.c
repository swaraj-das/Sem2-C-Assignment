// 1. Write a C program to print natural numbers from 1 to n and also print their sum.
#include<stdio.h>
int main(){
    int a,sum=0;
    printf("Enter limit: ");
    scanf("%d",&a);
    if(a>0){
        for(int i=0;i<=a;i++){
        sum=i+sum;
        }
    }
    printf("sum 1 to %d is %d",a,sum);
    return 0;
}