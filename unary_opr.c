#include<stdio.h>
void main(){

    //pre 
    int x=5;
    int y=++x;
    printf("x:%d y:%d\n",x,y);

    x=5;
    y=++x + ++x;
    printf("x:%d y:%d\n",x,y);

    x=5;
    y=++x + ++x + ++x;
    printf("x:%d y:%d\n\n",x,y);

    //post
    x=5;
    y=x++;
    printf("x:%d y:%d\n",x,y);

    x=5;
    y=x++ + x++;
    printf("x:%d y:%d\n",x,y);

    x=5;
    y=x++ + x++ + x++;
    printf("x:%d y:%d\n\n",x,y);

    //mix
    x=5;
    y=x++ + ++x;
    printf("x:%d y:%d\n",x,y);
}