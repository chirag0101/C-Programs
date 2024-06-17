#include<stdio.h>
void main(){
    printf("Even no.s:");
    for(int i=100;i>=1;i--){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    printf("\n\n Odd no.s:");
    for(int i=1;i<=100;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
    printf("\n");
}
