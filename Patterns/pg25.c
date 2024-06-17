#include<stdio.h>
void main(){
    int rows,cols,a=1;
    printf("Enter rows & cols:");
    scanf("%d%d",&rows,&cols);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
         printf("%d ",a);
        }
        printf("\n");
        a++;   

    }
}