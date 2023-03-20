#include<stdio.h>
void main(){
    int rows,a=1;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            printf("%d ",a);
            a+=3;
        }
        printf("\n");
    }
}