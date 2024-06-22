// 3. Write a C program to enter length and breadth of a rectangle and radius of a circle. Find perimeter and area of rectangle and circumference and area of circle.
#include<stdio.h>
#include<math.h>
void main(){
    float x,y,r;
    float pi=3.14;
    printf("Enter arms of rectangle: ");
    scanf("%f %f",&x,&y);

    printf("perimeter of rectangle: %f\n",2*(x+y));  

    printf("Enter radius: \n"); 
    scanf("%f",&r);

    printf("circumference and area of circle: %f",(2*pi*pow(r,2))); 
}