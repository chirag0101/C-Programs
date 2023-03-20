//WAP to find max of 2 no.s.
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter 1st no:");
    scanf("%d",&a);
    printf("Enter 2nd no:");
    scanf("%d",&b);

    if(a>b){
        printf("%d is greater than %d",a,b);
    }
    else{
        printf("%d is greater than %d",b,a);
    }
}
