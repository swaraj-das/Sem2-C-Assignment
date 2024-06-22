// 12. Write a C program to find value of following series: is user input.
#include<stdio.h>

int main(){
    int n;
    float y=0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        y += 1.0/i; // Accumulating the terms
        printf("1/%d + ",i); // Printing the current term
    }
    
    printf("\nThe value of the series up to %d terms is: %f\n", n, y);
    
    return 0;
}

