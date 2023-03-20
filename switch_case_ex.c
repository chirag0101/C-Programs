#include<stdio.h>
void main(){
    int a;
    printf("Enter a no:\n");
    scanf("%d",&a);
    switch(a){
        case 1:
                printf("%d:One\n",a);
                break;
        case 2:
                printf("%d:Two\n",a);
                break;
        case 3:
                printf("%d:Three\n",a);
                break;
        case 4:
                printf("%d:Four\n",a);
                break;
        case 5:
                printf("%d:Five\n",a);
                break;
        default:
                printf("%d is greater than 5\n",a);

    }
}
