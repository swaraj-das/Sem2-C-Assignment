/*5. Write a C program to print the following pascal triangle
      1
    1   1
  1   2   1
1   3   3   1 (Up to n numbers of row)*/
#include<stdio.h>
int main(){
    int n,c=1;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int s=1;s<=n-i;s++){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            if(j==0 || i==0){
                c=1;
            }
            else{
                c=c*(i-j+1)/j;
            }
             printf("%4d",c);
        }
        printf("\n");
    }
    return 0;
}