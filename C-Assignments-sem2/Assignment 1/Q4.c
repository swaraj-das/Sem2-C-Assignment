// 4. Write a C program to swap two numbers. (with and without third variable)
#include<stdio.h>
void main(){
    int x,y;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&x, &y);

    x=x^y;
    y=x^y;
    x=y^x;

   /*   x=x-y;
        y=x+y;
        x=y-x;
    */

    printf("Value of x: %d, value of y: %d",x,y);
}