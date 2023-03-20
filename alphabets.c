#include <stdio.h>
void main(){
    char x;
    printf("Enter char:\n");
    scanf("%c",&x);
    printf("%c\n",x);
    if(x>='A' && x<='Z'){
        printf("CAps");
    }
    else if(x>='a' && x<='z'){
        printf("Small");
    }
    else{
        printf("Invalid ip");
    }
}