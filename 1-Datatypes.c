//WAP to print the value and size of the below variables,take values from user.
#include<stdio.h>
void main(){
    int num;
    char chr;
    float rs;
    double crMoney;

    printf("Enter num:");
    scanf("%d",&num);
    printf("\nEnter chr:");
    scanf(" %c",&chr);
    printf("\nEnter rs:");
    scanf("%f",&rs);
    printf("\nEnter crMoney:");
    scanf("%lf",&crMoney);
   
    printf("\nNum: %d",num);
    printf("\nchr: %c",chr);
    printf("\nrs: %f",rs);
    printf("\ncrMoney: %lf",crMoney);

    printf("\n%ld",sizeof(num));
    printf("\n%ld",sizeof(chr));
    printf("\n%ld",sizeof(rs));
    printf("\n%ld",sizeof(crMoney));

}
