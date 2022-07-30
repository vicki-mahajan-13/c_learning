void swap()
{
    int a,b,c;
    printf("Enter number for a : ");
    scanf("%d",&a);
    printf("Enter number for b : ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a : %d\nb : %d",a,b);
}

#include <stdio.h>
int main()
{   
    swap();
    return 0;
}