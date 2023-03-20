#include<stdio.h>
void main(){
    int rows,a=18;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=1;j++){
            if(i%2==0){
                printf("A1 B2 C3 D4");
            }else {
                printf("D4 C3 B2 A1");
            }
        }
        printf("\n");
    }
}