#include<stdio.h>
void main(){
	int rev=10;
	for(int i=1;i<=10;i++){
		printf("%d + %d=%d\n",i,rev,i+rev);
		rev--;
	}
}
