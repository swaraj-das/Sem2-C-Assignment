#include<stdio.h>
int nck(int n,int k){
    if(k==0 || k==n){
        return 1;
    }
    return nck(n-1,k-1)+nck(n-1,k);
}

int main(){
    int n,k;
    printf("Enter the value of n & k: ");
    scanf("%d %d",&n,&k);
   printf("The result is = %d", nck(n,k));
   return 0;
}