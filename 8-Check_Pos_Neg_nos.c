//WAP to check if ip is a positive/negative no.
#include<stdio.h>
void main(){
    int x;
    printf("Enter a no:");
    scanf("%d",&x);

    if(x>0){
        printf("%d is Positive no",x);
    }
    else if(x<0){
        printf("%d is Negative no",x);
    }
    else{
        printf("%d is Zero",x);
    }
}
