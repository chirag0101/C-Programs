#include<stdio.h>
void main(){
    int ip;
    printf("Enter a no:");
    scanf("%d",&ip);
    if(ip%3==0){
        printf("%d is a multiple of 3\n",ip);
    }
    else{
        printf("%d is not a multiple of 3\n",ip);
    }
}

