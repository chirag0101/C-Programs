#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter sides: ");
    scanf("%d %d %d",&a,&b,&c);
    if(c*c==a*a+b*b){
        printf("Is a pythagorian triplet\n");
    }
}
