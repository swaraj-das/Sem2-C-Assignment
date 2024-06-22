#include <stdio.h>

int main() {
    int x, y, f = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (x > y)
        f = 1;
    else if (y > x)
        f = 2;
    else
        f = 3;

    switch (f) {
        case 1: 
            printf("%d is bigger\n", x);
            break;
        case 2: 
            printf("%d is bigger\n", y);
            break;
        case 3: 
            printf("Both numbers are the same\n");
            break;
        default:
            printf("Unexpected error\n");
            break;
    }

    return 0;
}
