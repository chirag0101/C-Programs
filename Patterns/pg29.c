#include<stdio.h>
void main(){
    int rows,cols;
    printf("Enter rows & cols:");
    scanf("%d%d",&rows,&cols);
    int a=1;
    char ch='a';
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i%2==0){
                printf("%d ",a);
                a++;
            }
            else{
                printf("%c ",ch);
                ch++;
            }
        }
        printf("\n");   
    }
}