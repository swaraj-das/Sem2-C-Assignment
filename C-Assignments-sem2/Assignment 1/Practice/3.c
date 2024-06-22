/*3. Write a C program to find area of a triangle Area of triangle=
 .Where a, b and c are three sides of the triangle and .*/

 #include<stdio.h>
 #include<math.h>
    int main(){
        int s,a,b,c;
        float area;
        printf("Enter a, b, c: ");
        scanf("%d %d %d",&a,&b,&c);

        s=(a+b+c)/2;
        area= sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area of Triangle: %f",area);
        return 0;
    }