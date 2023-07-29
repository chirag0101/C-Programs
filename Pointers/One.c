#include<stdio.h>

void main(){
    int a=10;
    int *ptr=&a;
    printf("%d\n",*ptr); 
    printf("%p\n",ptr);
    printf("%d",a);  

}