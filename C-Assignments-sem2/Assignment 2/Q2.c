// 2. Write a C program to check whether a number is positive, negative or zero using switch case.
#include<stdio.h>
int main(){
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);

    switch (x > 0) {
    case 1:
        printf("%d is positive\n", x);
        break;
    case 0:
     switch (x < 0) {
    case 1:
        printf("%d is negative\n", x);
        break;
    case 0:
        printf("%d is zero\n", x);
        break;
    }

    }
    return 0;
}