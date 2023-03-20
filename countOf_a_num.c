#include<stdio.h>
void main(){
    int a,b=0,rem,count=0;
    printf("Enter no:");
    scanf("%d",&a);
    int x=a;
    for(int i=a;a>=1;i--){
        rem=a%10;
        b=rem+b;
        a=a/10;
        count+=1;
    }
    printf("Count of %d is: %d\n",x,count);
}
