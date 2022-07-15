int square(int a)
{
    int b;
    b=a*a;
    return b;
}

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("square of %d is %d",a,square(a));
    return 0;
}