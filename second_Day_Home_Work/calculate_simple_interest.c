#include <stdio.h>
int main()
{
    float a,principle,rate,time;
    printf("Enter the principle");
    scanf("%f",&principle);
    printf("Enter the rate of interest");
    scanf("%f",&rate);
    printf("Enter the time");
    scanf("%f",&time);
    a=principle*rate*time/100;
    printf("Simple interest is %f",a);
    return 0;
}

