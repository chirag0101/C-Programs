#include<stdio.h>
void main(){
    int rows,a=2,b=1,c=2;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            printf("%d ",a);
            b+=2;
            c=a+b;
            a=c;
        }
        printf("\n");
    }
}