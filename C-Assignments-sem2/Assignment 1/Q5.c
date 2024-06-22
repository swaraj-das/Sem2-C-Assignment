// 5. Write a C program to find maximum between three numbers using nested if-else.

#include<stdio.h>
void main(){
    int x,y,z;
    printf("Enter x, y, z values: ");
    scanf("%d %d %d",&x, &y, &z);

    if(x>y){
        if(x>z){
            printf("%d is max",x);
        }
        else{
            printf("%d is max",z);
        }
    }
    
    else { 
        if(y>z){
            printf("%d is max",y);
        }
        else{
            printf("%d is max",z);
        }
    }    
}