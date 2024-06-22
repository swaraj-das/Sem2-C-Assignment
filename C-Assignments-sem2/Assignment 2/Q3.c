#include <stdio.h>
#include <math.h>

int main() {
    int x, n;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    switch (n) {
            case 1:
            printf("solution = %d\n", 1 + (int)pow(x, 2));
            break;
        case 2:
            if (n != 0) {
                printf("solution = %d\n", 1 + (x / n));
            }
            else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        case 3:
            printf("solution = %d\n", 1 + 2 * x);
            break;
        default:
            printf("solution = %d\n", 1 + n * x);
            break;
    }

    return 0;
}


/*#include <stdio.h>
#include <math.h>

int main() {
    int x, n;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("solution = %d\n", 1 + (int)pow(x, 2));
    } else if (n == 2) {
        if (n != 0) { // To avoid division by zero
            printf("solution = %d\n", 1 + (x / n));
        } else {
            printf("Division by zero is not allowed.\n");
        }
    } else if (n == 3) {
        printf("solution = %d\n", 1 + 2 * x);
    } else {
        printf("solution = %d\n", 1 + n * x);
    }

    return 0;
}
*/