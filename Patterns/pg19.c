#include<stdio.h>
void main(){
    int rows,a=1,b=1;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            printf("%d ",a);
             b=b+a;
             a=b;
        }
        printf("\n");
    }
}