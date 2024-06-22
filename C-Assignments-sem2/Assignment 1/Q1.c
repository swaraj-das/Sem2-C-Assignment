// 1. Write a C program to enter two numbers and find their sum.
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    int z=x+y;
    printf("Sum= %d",z);
    return 0;
}