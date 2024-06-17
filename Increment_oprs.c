//WAP to print the values of the expressions.
#include<stdio.h>
void main(){
    int x,ans,ans1,ans2,ans3;
    printf("Enter val of x:");
    scanf("%d",&x);

    ans=++x + x++ + ++x; 
    printf("Ans:%d\t",ans);
    printf("X:%d\n",x);

    ans1=++x + ++x + ++x + ++x;
    printf("Ans:%d\t",ans1);
    printf("X:%d\n",x);

    ans2=x++ + x++ + ++x + x++ + ++x;
    printf("Ans:%d\t",ans2);
    printf("X:%d\n",x);

    ans3=x++ + x++ + x++ + x++;
    printf("Ans:%d\t",ans3);
    printf("X:%d\n",x);
}
