#include<stdio.h>
void main(){
    int rows,a=1,b=2,c=1;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(j%2==0){
                printf("%d ",b);
                b+=2;
            }
            else{
                printf("%d ",c);
                a+=2;
                c=a*a;
            }   
        }
        printf("\n");
    }

}