// 2. Write a C program to count total number of vowels and consonants in a string.
#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        } 
        else if (str[i] >= 'a' && str[i] <= 'z') {
            consonants++;
        }
    }

    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}