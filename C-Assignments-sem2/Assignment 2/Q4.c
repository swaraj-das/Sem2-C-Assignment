// 4. Write a C program to find maximum between three numbers using logical operator and ternary operator.
#include <stdio.h>

int main() {
    int x, y, z, max;
    printf("Enter x, y, z: ");
    scanf("%d %d %d", &x, &y, &z);

    max = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);

    printf("%d is max\n", max);

   /* if((x>y)&&(x>z)){
        printf("%d is max",x);
    }
    else if((y>z)&&(y>x)){
         printf("%d is max",y);
    }
    else{
         printf("%d is max",z);
    }*/
    return 0;
}


