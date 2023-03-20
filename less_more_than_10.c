#include<stdio.h>
void main(){
    int x;
    printf("Enter a no:");
    scanf("%d",&x);

    if(x<10){
        printf("%d is less than 10",x);
    }
    else{
        printf("%d is greater than 10",x);
    }
}
