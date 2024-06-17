#include<stdio.h>
void main(){
    int rows;
    printf("Enter Rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        int x=3;
        char ch='c';
        for(int j=1;j<=rows;j++){
            if(i%2==0){
                printf("%c ",ch);
                ch--;
            }else{
                printf("%d ",x);
                x--;
            }
        }
        printf("\n");
    }
}