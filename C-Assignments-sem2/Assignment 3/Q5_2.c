#include<stdio.h>
int lcm(int x,int y){
    int max;
    if(x>y){
        max=x;
    }
    else{
        max=y;
    }
    for(    ; !((max%x==0)&&(max%y==0)) ; max++){

    }
    return max;
}

int gcd(int x,int y){
    int min;
    if(x<y){
        min=x;
    }
    else{
        min=y;
    }

    for(  ; !((x%min==0)&&(y%min==0)) ; min--){

    }
    return min;
}

int main(){
    int x,y;
    printf("Enter 1st num: ");
    scanf("%d",&x);
    printf("Enter 2nd num: ");
    scanf("%d",&y);
    int result=lcm(x,y);
    printf("The LCM is %d\n",result);
    int hcf=gcd(x,y);
    printf("The GCD is %d",hcf);
    return 0;
}