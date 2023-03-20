#include<stdio.h>
void main(){
    int rows;
    char ch='A',ch1='A';
    printf("Enter Rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        ch=ch1;
        for(int j=1;j<=rows;j++){
            printf("%c ",ch);
            ch++;
        }
        ch1++;
        printf("\n");
    }
}