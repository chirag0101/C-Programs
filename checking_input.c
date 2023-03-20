#include<stdio.h>
void main(){
    char i;
    printf("Enter Something:");
    scanf("%c",&i);
        if(i>=32 && i<=47){
            printf("%c : is a special symbol! ",i);
        }else if(i>=48 && i<=57){
            printf("%c : is a no! ",i);
        }else if(i>=57 && i<=64){
            printf("%c : is a symbol! ",i);
        }else if(i>=65 && i<=91){
            printf("%c : is a char ",i);
        }else if(i>=97 && i<=122){
            printf("%c : is a small char! ",i);
        }else if(i>=123 && i<=127){
            printf("%c : is a small char! ",i);
        }else{
            printf("%c : is a invalid ip!\n",i);
        }
}