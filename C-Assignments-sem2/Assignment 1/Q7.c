// 7. Write a C program to check whether year is leap year or not.
#include<stdio.h>
void main(){
    int y;
    printf("Enter a year to check leap year or not: ");
    scanf("%d",&y);

    if( y%4==0 && y%100!=0 || y%400==0 ){
        printf("%d is leap year",y);
    }
    else{
        printf("%d is not leap year",y);
    }
}