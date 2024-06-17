#include<stdio.h>
void main(){
    int rows;
    char ch='I';
    printf("Enter Rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            printf("%c ",ch);
            ch--;
        }
        printf("\n");
        }
}