// 4. Write a C program to calculate and print electricity bill for consumer @Rs.3.75 per unit, given the following information: previous meter reading and current reading.
#include<stdio.h>
int main(){
    int x;
    printf("Enter unit consumed: ");
    scanf("%d",&x);

    printf("Electricity bill= %f",x*3.75);
    return 0;
}