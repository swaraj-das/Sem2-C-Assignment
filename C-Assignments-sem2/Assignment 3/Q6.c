// 6. Write a C program to check whether a number is Prime number or not.
#include <stdio.h>
#include <math.h>

int main() {
    int n, flag = 1; // Assume n is prime initially
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    for (int i = 2; i<=sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0; // Found a divisor, n is not prime
            break;
        }
    }

    if (flag) {
        printf("%d is a prime number.\n", n);
    } 
    else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}

