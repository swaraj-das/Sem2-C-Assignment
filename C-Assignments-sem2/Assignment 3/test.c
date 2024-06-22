#include <stdio.h>
struct student 
{
    int roll;
    char name[30];
    int age;
    char address[100];
    float marks;
}a[5];

void main() 
{
  for(int i=1;i<=100;i++)  
      {
          printf("\nEnter detail for %d student:(roll,name,age,address,marks)",i);
          scanf("%d %s %d %s %f",&a[i].roll,a[i].name,&a[i].age,a[i].address,&a[i].marks);
          printf("\nRoll:%d",a[i].roll);
          printf("\nName:%s",a[i].name);
          printf("\nAge:%d",a[i].age);
          printf("\nAddress:%s",a[i].address);
          printf("\nMarks:%.2f",a[i].marks);
          
      }
}