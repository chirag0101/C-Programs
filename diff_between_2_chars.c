#include<stdio.h>
void main(){
    char x,y;
    printf("Enter chars:");
    scanf("%c %c",&x,&y);
    if(x==y){
        printf("1st:%c 2nd:%c\n",x,y);
    }
    else{
        printf("The Diff between %c & %c is :%d\n",x,y,y-x);
    }
}
