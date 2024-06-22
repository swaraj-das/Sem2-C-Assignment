// 5. Write a C program to find HCF (GCD) and LCM of two numbers.
#include<stdio.h>
int main(){
    int x,y,temp,num1,num2,hcf,lcm;
    printf("Enter 1st num: ");
    scanf("%d",&x);
    printf("Enter 2nd num: ");
    scanf("%d",&y);

    num1=x; //6
    num2=y; //10
    while(y!=0){ //10!=0
        temp=y;     //temp=10
        y=x%y;      //0=6%10
        x=temp;     //temp=0
    } 
    hcf = x;
    lcm = (num1*num2) / hcf;

    // Display the results
    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}