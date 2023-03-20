//WAP to check if ip is a Vowel or a Consonent.
#include<stdio.h>
void main(){
    char chr;
    printf("Enter an Capital Alphabet:");
    scanf("%c",&chr);
    if(chr=='A'||chr=='E'||chr=='I'||chr=='O'||chr=='U'){
        printf("%c is a Vowel",chr);
    }
    else{
        printf("%c is a Consonent",chr);
    }
}