// 1. Write a C program to find the factorial of a number and also find the value of nCr using this function.
#include<stdio.h>

int factor(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}


int NCR(int ncr){
   int n, r, i, j, k;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    // Calculate the factorial of n
    int fact_n = 1;
    for (i = 1; i <= n; i++) {
        fact_n *= i;
    }

    // Calculate the factorial of r
    int fact_r = 1;
    for (i = 1; i <= r; i++) {
        fact_r *= i;
    }

    // Calculate the factorial of n-r
    int fact_n_r = 1;
    for (i = 1; i <= n - r; i++) {
        fact_n_r *= i;
    }

    // Calculate the value of nCr
    ncr = fact_n / (fact_r * fact_n_r);
    return ncr;
}

int main(){
    int n;
    printf("Enter a number to factorise: ");
    scanf("%d",&n);
    int f= factor(n);
    printf("Factor of %d: %d",n,f);
   
    int ncr = NCR(ncr);
    printf("The value of nCr is %d\n", ncr);

    return 0;
}