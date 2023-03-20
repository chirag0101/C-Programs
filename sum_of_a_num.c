#include<stdio.h>
void main(){
    int ip,rem,sum=0;
    printf("Enter a no:");
    scanf("%d",&ip);
    for(int i=ip;ip>=1;i--){
        rem=ip%10;
        sum=rem+sum;
        ip=ip/10;
    }
    printf("Sum:%d\n",sum);
}
