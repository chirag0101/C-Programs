#include<stdio.h>
void main(){
    int start,end;
    printf("Enter Starting no:");
    scanf("%d",&start);
    printf("Enter Ending no:");
    scanf("%d",&end);
    for(int i=start;i<=end;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
    printf("\n");
    for(int j=end;j>=start;j--){
        if(j%2==0){
            printf("%d ",j);
        }
    }
    printf("\n");
}
