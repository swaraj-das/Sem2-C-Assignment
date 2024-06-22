/*3. Write a C program to print the following pattern:
      1
    2 3
  3 4 5
4 5 6 7 (Up to n numbers of row.)*/
#include <stdio.h>
int main() {
    int n,num=1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * (n - i - 1); j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d", num);
            num++;
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n"); 
    }
    return 0;
}



