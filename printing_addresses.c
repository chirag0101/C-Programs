#include<stdio.h>
void main(){
    int a=10;
    int *ptr=&a;
    int **ptr1=&ptr;

    printf("%p\n",ptr);
    printf("%p\n",*ptr1);
    printf("%p",ptr1);
}
