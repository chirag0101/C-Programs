
#include<stdio.h>

    char* mystrrev(char *a){
        char *temp=a;
        while(*temp!='\0'){
            temp++;
        }
        temp--;
        char x;
        while(a<temp){
            x=*a;
            *a=*temp;
            *temp=x;
            a++;
            temp--;
        }
        return a;
    }

    void main(){
        char str1[10]="Chirag";        
        mystrrev(str1);
        puts(str1);
    }