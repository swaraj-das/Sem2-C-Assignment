// 1. Write a C Program using pointer to find the bigger of two given numbers.
#include <stdio.h>

// Function to find the bigger of two numbers using pointers
void findBigger(int *num1, int *num2, int *result) {
    if (*num1 > *num2) {
        *result = *num1;
    } else {
        *result = *num2;
    }
}

int main() {
    int x, y, bigger;
    
    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    // Read the two numbers from standard input
    scanf("%d %d", &x, &y);
    
    // Call the function to find the bigger number
    findBigger(&x, &y, &bigger);
    
    // Print the result
    printf("The bigger number is: %d\n", bigger);
    
    return 0;
}
