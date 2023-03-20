#include<stdio.h>
void main(){
    int rows;
    char ch='D',ch1='d',ch2=ch,ch3=ch1;
    printf("Enter Rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(i%2!=0){
                printf("%c ",ch);
                ch--;
            }else{
                printf("%c ",ch1);
                ch1--;
            }
        }
        ch2++;
        ch3++;
        ch=ch2;
        ch1=ch3;
        printf("\n");
        }
        
    }
