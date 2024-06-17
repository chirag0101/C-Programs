#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter 1st no:\n");
    scanf("%d",&a);
    printf("Enter 2nd no:\n");
    scanf("%d",&b);
    printf("Enter 3rd no:\n");
    scanf("%d",&c);

    if(a<b && a<c){
        printf("Min number is %d\n",a);
    }
    else if(b<a && b<c){
        printf("Min number is %d\n",b);
    }
    else{
        printf("Min number is %d\n",c);
    }
}
