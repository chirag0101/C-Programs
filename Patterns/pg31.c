#include<stdio.h>
void main(){
    int rows;
    char a='d';
    printf("Enter rows:");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            printf("%c ",a);
        }
        a--;
        printf("\n");
    }
}