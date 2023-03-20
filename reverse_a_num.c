#include<stdio.h>
void main(){
    int ip,rem=0,rev=0;
    printf("Enter a no:");
    scanf("%d",&ip);
    for(int i=ip;ip>=1;i--){
        rem=ip%10;
        rev=rev*10+rem;
        ip=ip/10;
    }
    printf("%d\n",rev);
}
