#include<stdio.h>
void main(){
	int div,count=0,sum=0,ip;
	printf("Enter a no:");
	scanf("%d",&ip);
	printf("DIvisors of %d are:",ip);
	for(int i=1;i<=ip;i++){
		if(ip%i==0){
			printf("%d ",i);
			sum=sum+i;
			count++;
			}
		}
		printf("\n");
		printf("Sum: %d\n",sum);
		printf("Count: %d\n",count);

}

