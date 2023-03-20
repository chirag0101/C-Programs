#include<stdio.h>
void main(){
    int rows,a=5,b=1;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(i%2==0){
                printf("%d ",a*a);
                a++;
            }else{
                printf("%d ",b);
                b++;
            }
        }
        if(i%2==0){
            a+=4;
        }else{
            b+=4;
        }
        printf("\n");
    }
}