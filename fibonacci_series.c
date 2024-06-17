#include<stdio.h>
void main(){
    int ip,a=0,b=1,c=0;
    printf("Enter a no:");
    scanf("%d",&ip);
    for(int i=0;i<=ip;i++){
        printf("%d ",a);
        a=a+b;

        a=a-b;
        b=a+b;
        a=b-a;
        
    }
    printf("\n");
}