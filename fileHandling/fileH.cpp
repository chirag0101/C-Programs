#include<stdio.h>
#include<iostream>

int main(){
    FILE *ptr;
    ptr=fopen("test.txt","w");

    // fprintf(ptr,"Chirag Suryawanshi!");
    // fprintf(ptr,"\n 9004726795");

    fprintf(ptr,"\n Sanjay , Rupali");
    char str[100];

    while(fgets(str,100,ptr)){
       std:: cout<<str;
    }

    fclose(ptr);
}