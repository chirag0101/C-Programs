#include<stdio.h>
void main(){
    int rows,no=1,no2=1;
    printf("Enter no of rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        no=no2;
        for(int j=1;j<=rows;j++){
            printf("%d ",no);
            no++;
        }
        printf("\n");
        no2++;
    }
}