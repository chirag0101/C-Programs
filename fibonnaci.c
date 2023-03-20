//Fibonacci series-Series of addition of previous 2 no.s.

#include<stdio.h>

void main(){
    int a=1;
    int b=2;
    int temp=0;
    for(int i=0;i<=5;++i){
        printf("%d\n",a);
        a=a+b;
        temp=a;
        a=b;
        b=temp;
    }
    
}