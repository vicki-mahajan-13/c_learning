#include  <stdio.h>
int main()
{
    float a=1.5,b=2.5,c;
    c=a;
    a=b;
    b=c;
    printf("a=%f\nb=%f",a,b);
    return 0;
}

