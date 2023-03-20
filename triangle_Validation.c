#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter sides:");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c==180){
        printf("Is a valid traingle...\n");
    }
    else{
        printf("Is an invalid triangle...\n");
    }
}
