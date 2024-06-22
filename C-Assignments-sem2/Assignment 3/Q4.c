// 4. Write a C program to calculate factorial of a number
#include<stdio.h>
int main(){
    int x,f=1;
    printf("Enter a number for factor: ");
    scanf("%d",&x);

    if(x<0){
        printf("Negative factor doesn't exists");
    }
    else{
        for(int i=1;i<=x;i++){
            f=f*i;
        }
    }
    printf("Factor of %d = %d",x,f);

    return 0;
}