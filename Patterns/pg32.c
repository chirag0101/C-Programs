#include<stdio.h>
void main(){
    int rows;
    char a='a',b='B';
    printf("Enter rows:");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            if(j%2==1){
                printf("%c ",b);
                b+=3;
                a+=2;
            }else{
                printf("%c ",a);
                
            }
        }
        a+=1;
        printf("\n");
    }
}