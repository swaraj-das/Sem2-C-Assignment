// 8. Write a C program to find all roots of a quadratic equation for all possible combination of a, b and c.
#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c;
    printf("Enter a, b, c: ");
    scanf("%d %d %d",&a, &b, &c);

    if((pow(b,2)-4*a*c)>0){
        printf("The roots are unequal and real\n");
        printf("%f\n",(-b + sqrt(pow(b,2)-4*a*c))/(2*a) );
        printf("%f\n",(-b - sqrt(pow(b,2)-4*a*c))/(2*a) );
    }

    else if((pow(b,2)-4*a*c)==0){
        printf("The roots are equal and real\n");
        printf("%d\n",a);
        printf("%d",-(b/(2*a)) );
    }
    else if((pow(b,2)-4*a*c)<0){
        printf("The roots are imaginary");
    }
}