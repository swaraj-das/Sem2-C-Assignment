//4. Write a C program to calculate all factors of a number
#include<stdio.h>
int main(){
    int x,f=1;
    printf("Enter a number to get all factors: ");
    scanf("%d",&x);

    if(x<0){
        printf("Negative factors doesn't exists");
    }
    else{
        for(int i=1;i<=x;i++){
           if(x%i==0){
            printf("Factor is %d\n",i);
           }
        }
    }


    return 0;
}