// 7. Write a C program to print all Prime numbers between 1 to n.
#include <stdio.h>

int main() {
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d:\n", n);
    for (int i = 2; i <= n; ++i) {
        int is_prime = 1;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                is_prime = 0; 
                break;
            }
        }
        if (is_prime) {
            printf("%d\t", i);
            sum=sum+i;
        }
    }
    printf("sum = %d",sum);

    return 0;
}
