// 2. Write a C program to insert and delete an element from the any position of an array.
#include<stdio.h>
int main(){
    int n,i,item,pos,pos2;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element : ");
    scanf("%d",&item);
    printf("Enter the position : ");
    scanf("%d",&pos);
    for(i=n-1;i>=pos;i--)
    a[i]=a[i-1];
    a[pos-1]=item;
    printf("After inserting element :\n");
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

 printf("Enter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos2);
    if (pos2 < 0 || pos2 >= n) {
        printf("Invalid position!\n");
        return 1;
    }
    // Shift elements to the left to overwrite the element at the position
    for (i = pos2; i < n - 1; i++) {
        a[i] = a[i + 1];
    }  
    n--; // Decrease the size of the array 
    printf("After deleting the element at position %d:\n", pos2);
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}