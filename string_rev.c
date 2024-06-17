#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    printf("Enter String:");
    gets(ch);
    int count=0;
    while(ch[count]!='\0'){
        count++;
    }
    printf("\nString size: %d\n",count);
    int i=0,j=count-1;
    while(i<j){
        char temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
        i++;
        j--;
    }
    printf("\nReversed string:%s\n\n",ch);
    return 0;
}