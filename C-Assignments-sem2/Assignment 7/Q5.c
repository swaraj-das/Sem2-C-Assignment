// 5. Write a C program to check whether a string is palindrome or not (using single string only).
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    int flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}