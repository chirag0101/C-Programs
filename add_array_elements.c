#include<stdio.h>
void main(){
    int a[5],b;
    for(int i=1;i<=5;++i){
        printf("Enter no %d :",i);
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=5;++i){
        b=b+a[i];
    }
    printf("Addition: %d",b);
}