//Factorial of a number means the multiplication of it's last digits.

#include<stdio.h>

void main(){
    int x;
    int fact=1;
    printf("Enter a no, to get it's factorial:");
    scanf("%d",&x);
    for(int i=1;i<=x;++i){
        fact=fact*i;
    }
    printf("%d",fact);
}