// 2. Write a C program to check whether a number is palindrome or not
#include<stdio.h>
int main(){
    int num,org_num,rev_num=0,remainder;
    printf("Enter a number to check palindroe or not: ");
    scanf("%d",&num);

    org_num=num;
    while(num!=0){
        remainder=num%10;
        rev_num=rev_num*10+remainder;
        num=num/10;
    }

    if(org_num==rev_num){
        printf("%d is palindrome",org_num);
    }
    else{
        printf("%d is not palindrome",org_num);
    }


    return 0;
}