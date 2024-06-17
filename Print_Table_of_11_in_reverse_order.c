//WAP to print table of 11 in reverse order.
#include<stdio.h>
void main(){
    int x=11;
    for(int i=10;i>=1;--i){
        printf("%d * %d = %d\n",x,i,x*i);
    }
}
