#include<stdio.h>
void main(){
    int rows,cols;
    char a='a';
    printf("Enter rows & cols:");
    scanf("%d%d",&rows,&cols);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
         printf("%c ",a);
         a++;   
        }
        printf("\n");
    }
}