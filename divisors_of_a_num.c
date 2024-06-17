#include<stdio.h>
void main(){
    int x;
    printf("Enter a no:");
    scanf("%d",&x);
    printf("Divisors of %d are:\n",x);
    for(int i=1;i<=100;i++){
        if(x%i==0){
            printf("%d \n",i);
        }
    }
}
