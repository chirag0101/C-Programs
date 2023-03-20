#include<stdio.h>
void main(){
    int start,end;
    printf("Enter start & end:");
    scanf("%d %d",&start,&end);
    for(int i=start+1;i<end;i++){
        int a=i*i;
        printf("%d\n",a);
    }
}