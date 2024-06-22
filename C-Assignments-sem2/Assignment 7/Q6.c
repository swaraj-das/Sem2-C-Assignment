// 6. Write a C program to find total number of alphabets, digits or special character in a string.
#include <stdio.h>
int main() {
    char str[100];
    int i, alphabets, digits, special;

    // Get the input string from the user.
    printf("Enter a string: ");
    gets(str);

    // Initialize the counters.
    alphabets = digits = special = 0;

    // Iterate through the string and count the characters.
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            special++;
        }
    }

    // Print the results.
    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);

    return 0;
}