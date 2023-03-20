//WAP to print even no.s between 1-100
#include<stdio.h>
void main(){
    printf("Even nos from 1-100:");
    for(int i=1;i<=100;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}
