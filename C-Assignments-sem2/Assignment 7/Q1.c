// 1. Write a C program to find length of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    printf("Enter the string: ");
    scanf("%s", str);

    len = strlen(str);
    
    printf("The length of the string is %d\n", len);

    return 0;
}