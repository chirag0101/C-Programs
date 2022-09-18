//WAP to check if ip is a Upper/Lowercase Char.
#include<stdio.h>
void main(){
    char chr;
    printf("Enter a Char:");
    scanf("%c",&chr);

    if(chr>='A' && chr<='Z'){
        printf("You Entered Uppercase");
    }
    else if(chr>='a' && chr<='z'){
        printf("You Entered Lowercase");
    }
    else{
        printf("Invalid Input");
    }
}
