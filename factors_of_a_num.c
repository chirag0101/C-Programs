#include<stdio.h>
void main(){
	int a;
	printf("Enter a no:");
	scanf("%d",&a);
	printf("Factors of %d are: ",a);
	for(int i=1;i<=100;i++){
		if(a%i==0){
			printf("%d ",i);
		}
	}
	printf("\n");
}


