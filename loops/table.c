#include <stdio.h>
int main()
{
    int n,i,y;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        y=n*i;
        printf("%d\n",y);
    }
    return 0;
}