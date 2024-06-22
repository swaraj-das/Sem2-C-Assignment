// 8. Write a C program to check whether a number is Armstrong number or not.
#include<stdio.h>
#include<math.h>

int main(){
    int n,org,rem,result=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    org=n;
    while(org!=0){
        rem=org%10;
        result=result+(rem*rem*rem);
        org=org/10;
    }

    if(n==result){
        printf("%d is Armstrong number",n);
    }
    else{
        printf("%d is not Armstrong number",n);
    }

    return 0;
}