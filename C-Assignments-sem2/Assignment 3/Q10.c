// 10. Write a C program to check whether a number is Strong number or not.
#include<stdio.h>

int main() {
    int num, org, rem, fact, result = 0;

    printf("Enter a number to check strong or weak: ");
    scanf("%d", &num);

    org = num; // Initialize org with the original number

    while (org != 0) {
        rem = org % 10;
        // Calculate factorial of the remainder
        fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }
        result += fact;
        org /= 10;
    }

    if (result == num) {
        printf("%d is a strong number\n", num);
    } else {
        printf("%d is not a strong number\n", num);
    }

    return 0;
}
