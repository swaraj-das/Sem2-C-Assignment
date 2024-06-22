// 6. Write a C program to find the Fibonacci series up to n term using recursive function
#include<stdio.h>
int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    printf("Enter the max terms: ");
    scanf("%d",&n);

    printf("Fibonacci series upto %d terms: \n",n);
    for(int i=0; i<n;i++){
    printf(" %d",fibo(i));
    }
    printf("\n");
    return 0;
}