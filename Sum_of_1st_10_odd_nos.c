//WAP to print the sum of 1st 10 odd no.s.
#include<stdio.h>
void main(){
        int x=0;
        printf("1st 10 Odd nos:\n");
        for(int i=1;i<=10;i++){
                x=x+2*i-1;
                printf("%d\n",2*i-1);
        }
        printf("Sum:%d\n",x);
}
