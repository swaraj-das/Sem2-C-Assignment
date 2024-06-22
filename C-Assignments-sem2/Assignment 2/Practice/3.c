#include <stdio.h>

int main() {
    int x, y;
    char ch;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &ch);

    switch (ch) {
        case '+': 
            printf("%d + %d = %d\n", x, y, x + y);
            break;
        case '-': 
            printf("%d - %d = %d\n", x, y, x - y);
            break;
        case '*': 
            printf("%d * %d = %d\n", x, y, x * y);
            break;
        case '/': 
            if (y != 0) {
                printf("%d / %d = %d\n", x, y, x / y);
            } else {
                printf("Division by zero error!\n");
            }
            break;
        default:
            printf("Wrong Input!!\n");
            break;
    }

    return 0;
}
