// 4. Write a C program to find power of any number using recursive function.
#include<stdio.h>
double power(double x, double n){
    if(n==0){
        return 1.0;
    }
    return power(x,n-1)*x;
}


int main(){
    double x,n;
    printf("Enter the value of x: ");
    scanf("%lf",&x);
    printf("Enter the power: ");
    scanf("%lf",&n);

    printf(" %.2lf ^ %.2lf = %.2lf",x,n,power(x,n));
    return 0;
}