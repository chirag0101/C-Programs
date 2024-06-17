/*
         1
       2 3 2
     3 4 5 4 3      
   4 5 6 7 6 5 4
 5 6 7 8 9 8 7 6 5
 
*/
#include<stdio.h>
void main(){
    int rows,a,b;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=rows-1;j>=i;j--){
            printf("  ");
        }
        for(int k=i;k>=2;k--){
            printf("%d ",k);
        }
        for(int l=1;l>=1;l--){
            printf("%d ",l);
        }
        printf("\n");
    }
}
