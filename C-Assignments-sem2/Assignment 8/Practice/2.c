#include<stdio.h>
int gcd(int x, int y){
    int min;
    if(x%y==0){
        return y;
    }
    return gcd(y,x%y);
}

int main(){
    int x, y, z;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&x,&y, &z);
    printf("gcd of %d & %d & %d is %d",x,y,z,gcd(gcd(x,y),z));
    return 0;
}