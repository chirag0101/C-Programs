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

    printf("\n%d",sizeof(num));
    printf("\n%c",sizeof(chr));
    printf("\n%f",sizeof(rs));
    printf("\n%lf",sizeof(crMoney));

}
