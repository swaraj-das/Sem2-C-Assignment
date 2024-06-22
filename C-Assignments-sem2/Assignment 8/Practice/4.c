#include<stdio.h>

// Function to calculate the sum of two integers using bitwise operations
int sum(int x, int y){
    // Base case: if x is 0, the sum is y
    if(x == 0){
        return y;
    }
    // Recursive case: calculate sum using bitwise XOR and bitwise AND operations
    return sum(y ^ x, (y & x) << 1);
}

int main(){
    int x, y;
    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    // Read the two numbers from standard input
    scanf("%d %d", &x, &y);
    // Call the sum function and print the result
    printf("%d", sum(x, y));
    return 0;
}
