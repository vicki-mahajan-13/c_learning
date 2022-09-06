#include <stdio.h>
int square_root(int b)
{
    int i;
    for(i=1;i<b;i++)
    {
        if(i*i==b)
        break;
    }
    return i;
}

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("%d",square_root(a));
    return 0;
}