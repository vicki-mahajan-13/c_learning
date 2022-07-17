#include <stdio.h>
int main()
{
    int i,a[5];
    printf("Enter five numbers");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=5;i>=1;i--)
    printf("%d",i);
}