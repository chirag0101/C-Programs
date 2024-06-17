#include<stdio.h>
void main(){
    int a;
    printf("Enter a year:");
    scanf("%d",&a);

    if(a%4==0){
        printf("%d is a leap year...\n",a);
    }
    else{
        printf("%d isn't a leap year...\n",a);
    }
}
