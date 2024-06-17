#include<stdio.h>
void main(){
        int a,b,c,d,e,f,g,h,i,j,x;
        float y;
        printf("Enter no.s:");
        scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
        x=(a+b+c+d+e+f+g+h+i+j);
        printf("Sum:%d\n",x);
        y=(x/10);
        printf("Average:%f\n",y);
}
