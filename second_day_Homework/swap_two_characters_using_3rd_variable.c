#include  <stdio.h>
int main()
{
    char a=65,b=66,c;
    c=a;
    a=b;
    b=c;
    printf("a=%d\nb=%d",a,b);
    return 0;
}

