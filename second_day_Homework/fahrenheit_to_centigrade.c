#include <stdio.h>
int main()
{
    float cent,fahr;
    printf("Enter temperature in Fahrenheit degrees\n");
    scanf("%f",&fahr);
    cent=(fahr-32)*5/9;
    printf("Centigrade of Fahrenheit %f is %f",fahr,cent);
    return 0;
}

