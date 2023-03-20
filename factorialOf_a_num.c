#include<stdio.h>
void main(){
	int ip,fact=1;
	printf("Enter a no:");
	scanf("%d",&ip);
	for(int i=1;i<=ip;i++){
		fact=fact*i;
	}
	printf("Factorial of %d is: %d\n",ip,fact);
}
