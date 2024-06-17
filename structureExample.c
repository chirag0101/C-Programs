#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Lang{
    char langname[10];
    char founder[20];
};

void printDetails(){
    struct Lang *ptr=(struct Lang*)malloc(sizeof(struct Lang));
    printf("\nEnter Langname:");
    scanf("%s",&(ptr->langname));

    getchar();

    printf("\nEnter Founder Name:");
    scanf("%s",&(ptr->founder));

    getchar();

    printf("\n%s",ptr->langname);

    printf("\n%s",ptr->founder);


    free(ptr);
}

void main(){
        int i=0;
        while(i<3){
            printDetails();
            i++;
        }
}