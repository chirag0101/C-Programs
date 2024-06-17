#include<stdio.h>
void main(){
    int a=0;
    for(int i=1;i<=50;i++){
        if(i%5==0){
            a=a+i;
        }
    }
    printf("The sum of all of no.s divisible by 5 from 1-50 is: %d\n",a);
}
