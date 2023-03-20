#include<stdio.h>
void main(){
    int rows;
    printf("Enter Rows:");
    scanf("%d",&rows);
    int ch=rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            printf("%d ",ch);
        }
        ch--;
        printf("\n");
        }
    }