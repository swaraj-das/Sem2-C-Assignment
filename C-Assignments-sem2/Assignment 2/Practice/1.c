#include <stdio.h>

int main() {
    int x;
    printf("Enter consumption unit: ");
    scanf("%d", &x);
    
    if (x <= 200) {
        printf("Bill: %.2f\n", x * 0.5);
    }
    else if (x <= 400) {
        printf("Bill: %.2f\n", 100 + x * 0.65);
    }
    else if (x <= 600) {
        printf("Bill: %.2f\n", 250 + x * 0.80);
    }
    else {
        printf("Bill: %.2f\n", 425 + x * 1.25);
    }

    return 0;
}
