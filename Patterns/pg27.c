#include<stdio.h>
void main(){
    int rows;
    printf("Enter rows:");
    scanf("%d",&rows);
    int a=9;
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
         printf("%d ",a);
         a--;   

        }
        printf("\n");
    }
}