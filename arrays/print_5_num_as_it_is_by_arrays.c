#include <stdio.h>
int main()
{
    int i,a[5];
    printf("Enter five numbers");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=5;i++)
        printf("%d",i);
}