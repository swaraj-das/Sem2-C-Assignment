#include<stdio.h>

int main(){
    int num,t1=0,t2=1,t3;
    
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    
    printf("Fibonacci series up to %d terms: ", num);
    printf("%d, %d", t1, t2); 
    
    for(int i=3;i<=num;i++){
        t3=t1+t2;
        printf(", %d",t3);
        t1=t2;
        t2=t3;
    }
    return 0;
}
