#include<stdio.h>
void main(){
    int rows;
    printf("Enter no of rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        int no=1;
        char ch='a';
        for(int j=1;j<=rows;j++){
            if(i%2==0){
                printf("%c ",ch);
                ch++;
            }
            else{
                printf("%d ",no);
                no++;
            }
        }
        printf("\n");
    }
}