#include <stdio.h>
int main()
{
    int i,base,power,r=1;
    printf("Enter a base\n");
    scanf("%d",&base);
    printf("Enter a power\n");
    scanf("%d",&power);
    for(i=1 ; i<=power; i++)
       r=r*base;

    printf("the power is : %d",r);
    return 0;
}      