#include<stdio.h>
void main(){
    int start,end;
    printf("Enter start & end:");
    scanf("%d %d",&start,&end);
    for(int i=end;i>start;i--){
        if(i%3==0 && i%7==0){
            printf("%d\n",i);
        }
    }
}