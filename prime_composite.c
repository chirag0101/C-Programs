#include<stdio.h>
void main(){
    int ip;
    printf("Enter a no:");
    scanf("%d",&ip);
    for(int i=2;i<=ip;i++){
        if(ip%i==0){
                printf("Comp!");
                break;
            }else{
                printf("Prime!\n");
                break;
        }
    }
}
