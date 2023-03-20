#include<stdio.h>
void main(){
    int rows;
    int a=9,b=8;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            if(j%2==1){
                printf("%d ",b*b);
                b-=2;
                a-=2;
            }else{
                printf("%d ",a);
            }
        }
        printf("\n");
    }
}