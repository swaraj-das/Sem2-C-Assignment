/*2. The length and breadth of a rectangle and radius of a circle are input through keyboard.
Write a program to calculate the area and perimeter of the rectangle, and the area and the
circumference of the circle.*/

#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    printf("Enter length and breadth of the rectangle: ");
    scanf("%d %d", &x, &y);

    int area_rectangle = x*y;
    int perimeter_rectangle = 2*(x + y);

    printf("Area of rectangle: %d\n", area_rectangle);
    printf("Perimeter of rectangle: %d\n", perimeter_rectangle);

    float r;
    printf("Enter radius of the circle: ");
    scanf("%f", &r);

    float circumference = 2 * 3.14 * r;
    float area_circle = 3.14 * pow(r, 2);

    printf("Circumference of the circle: %f\n", circumference);
    printf("Area of the circle: %f\n", area_circle);

    return 0;
}
