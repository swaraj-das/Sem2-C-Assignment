// Write a C program to find the GCD of two numbers using recursive function, and also find the GCD of three numbers using this function.
#include<stdio.h>
int gcd(int x,int y){
    if(x%y==0){
        return y;
    }
    return gcd(y,x%y);
}

int main(){
    int x,y,z;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    printf("GCD of %d, %d, %d = %d",x,y,z,gcd(gcd(x,y),z));
    return 0;
}