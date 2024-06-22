// 1. Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    }

    switch(ch){
        case 'a':
            printf("%c is vowel",ch);
        break;
        case 'e':
            printf("%c is vowel",ch);
        break;
        case 'i':
            printf("%c is vowel",ch);
        break;
        case 'o':
            printf("%c is vowel",ch);
        break;
        case 'u':
            printf("%c is vowel",ch);
        break;
        default: printf("%c is not vowel",ch);
    }
}