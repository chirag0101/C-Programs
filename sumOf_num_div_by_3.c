#include<stdio.h>
void main(){
	int num,sum;
	printf("Enter a no:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		if(i%3!=0){
			sum=i+sum;
		}
	}
	printf("Sum of no.s that r not divisible by 3 is: %d\n",sum);
}	

