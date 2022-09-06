#include <stdio.h>
int square(int *);
int square(int *b)
{
    int i,d=1;
    if(b==1)
    {
        return 1;
    }
    else
    {
        for(i=1;i<b;i++)
        {
            d=d+d;
        }
        return d;
    }
}

int main()
{
    int a,b;
    printf("Enter the num of square in chess");
    scanf("%d",&a);
    b=square(a);
    printf("%d",b);
}









