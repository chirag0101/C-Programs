#include<stdio.h>
#include<stdlib.h>

int main(){    
while(1){
    char str1[10],str2[10];

    printf("Enter str1(maximum 10 alphabets):\n");
    gets(str1);

    printf("Enter str2(maximum 10 alphabets):\n");
    gets(str2);

    int size1=0,size2=0;

    while(str1[size1]!='\0'){
        size1++;
    }
    
    while(str2[size2]!='\0'){
        size2++;
    }

    int count=0,i=0; 

    if(size1!=size2){
        printf("Strings Size don't match!\n");
        exit(0);
    }else{
        while(i<size1){
            if(str1[i]==str2[i]){
                ++count;
                ++i;
            }else{
                break;
            }
        }
        if(count==size1){
            printf("Strings Match!\n\n");
        }else{
            printf("Strings don't match!\n\n");
        }
    }
}
    return 0;
}