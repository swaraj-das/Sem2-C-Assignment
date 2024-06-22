// 9. Write a C program to check whether a number is Perfect number or not.
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }

    if(sum==num){
        printf("%d is perfect number",num);
    }
    else{
        printf("%d is not perfect number",num);
    }

    return 0;
}