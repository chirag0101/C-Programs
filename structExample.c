#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Player{
    char name[12];
    int jerNo;
};

struct IPL{
    struct Player obj;
    int numOfTeams;
};

void getPlayer(){
    
    struct IPL iplObj;

    printf("\nEnter Name:");
    fgets(iplObj.obj.name,12,stdin);

    printf("\nEnter No:");
    scanf("%d",&iplObj.obj.jerNo);

    printf("\nEnter No Of Teams:");
    scanf("%d",&iplObj.numOfTeams);

    puts(iplObj.obj.name);

    printf("%d",iplObj.obj.jerNo);

    printf("\n%d\n",iplObj.numOfTeams);

}

void main(){
    getPlayer();
}