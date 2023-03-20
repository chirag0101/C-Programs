#include<stdio.h>
void main(){
    int ip,rem,prod=1;
    printf("Enter a no:");
    scanf("%d",&ip);
    for(int i=ip;ip>=1;i--){
        rem=ip%10;
        prod=rem*prod;
        ip=ip/10;
    }
    printf("Product:%d",prod);
}