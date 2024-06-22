// 6. Write a C program to check whether a number is even or odd using if-else statement.
#include<stdio.h>
void main(){
    int x;
    printf("Enter a number to check even or odd: ");
    scanf("%d",&x);

    if(x%2==0){
        printf("%d is even",x);
    }
    else{
        printf("%d is odd",x);
    }
}