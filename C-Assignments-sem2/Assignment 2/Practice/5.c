#include<stdio.h>
int main(){
    
    int c;
    printf("Enter a number between 0 and 100: ");
    scanf("%d", &c);

    if(c >= 90 && c <= 100){
        printf("Grade O\n");
    }
    else if(c >= 80 && c < 90){
        printf("Grade E\n");
    }
    else if(c >= 70 && c < 80){
        printf("Grade A\n");
    }
    else if(c >= 60 && c < 70){
        printf("Grade B\n");
    }
    else if(c >= 50 && c < 60){
        printf("Grade C\n");
    }
    else if(c >= 40 && c < 50){
        printf("Grade D\n");
    }
    else if(c >= 0 && c < 40){
        printf("Fail\n");
    }
    else{
        printf("Invalid number\n");
    }

    return 0;
}
