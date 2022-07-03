#include <stdio.h>
int main()
{
    float cent,fahr;
    printf("Enter temperature\n");
    scanf("%f",&cent);
    fahr=(cent*9/5)+32;
    printf("fahrenheit of centigrade %f is %f",cent,fahr);
    return 0;
}