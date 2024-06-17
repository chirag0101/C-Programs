#include<stdio.h>
void main(){
    int rows;
    printf("Enter rows:");
    scanf("%d",&rows);
    int a=1,b=1;
    for(int i=0;i<rows;i++){
        
        for(int j=0;j<rows;j++){
            if(j>0){
                b++;
                printf("%d ",b);
            }else{
                printf("%d ",a);
            }
        }
         a++;
         b=a;
         printf("\n");
    }
}
