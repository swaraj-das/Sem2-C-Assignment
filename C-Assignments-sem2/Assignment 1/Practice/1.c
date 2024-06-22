/*1. Mr. Sayan Ghosh is an employee of a Private Firm. His Basic is Rs. 5500/-. Now the dearness
allowance is 74% of his basic salary and house rent allowance is 15% of basic salary. Write
a program to calculate his gross salary. [Though his basic salary is given, do this program
where basic is taken through keyboard].*/

#include<stdio.h>
int main(){
    int basic,da,hra;
    printf("Enter basic: ");
    scanf("%d",&basic);

    printf("Enter da: ");
    scanf("%d",&da);

    printf("Enter hra: ");
    scanf("%d",&hra);

    int gross= (basic*da/100)+(basic*hra/100)+basic;
    printf("The gross salary: %d",gross);

    return 0;
}