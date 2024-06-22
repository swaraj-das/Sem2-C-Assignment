/*4. Write a C program to print digits in following pyramidal form:
      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4 (Up to n numbers of row)*/
#include <stdio.h>

int main() {
    int n, i, j, s;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (s = 0; s < n - i; s++) {
            printf("  ");
        }
        
        // Print increasing part of the pattern
        for (j = 0; j < i; j++) {
            printf("%d ", i + j);
        }

        // Print decreasing part of the pattern
        for (j = i - 1; j > 0; j--) {
            printf("%d ", i + j - 1);
        }
        
        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}
