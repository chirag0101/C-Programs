#include<stdio.h>
void main(){
    int rows;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(j==1){
            printf("D4 ");
            }else if(j==2){
                printf("C3 ");
            }else if(j==3){
                printf("B2 ");
            }
            else{
                printf("A1 ");
            }
        }
        printf("\n");
    }
}