#include<stdio.h>
double power(double x,double n){
    if(n==0){
        return 1.0;
    }
    return power(x, n-1)*x;
}

int main(){
    double n,x;
    printf("Enter power: ");
    scanf("%lf",&n);
    printf("Enter x:");
    scanf("%lf",&x);
    printf("%.2lf ^ %.2lf = %.2lf",x,n,power(x,n));
    return 0;
}