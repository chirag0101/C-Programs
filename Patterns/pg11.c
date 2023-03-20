#include<stdio.h>
void main(){
    int rows,x=4,a=4;
    printf("Enter Rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            printf("%d ",x);
            x--;
        }
        printf("\n");
        a++;
        x=a;
    }
}