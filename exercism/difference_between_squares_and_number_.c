#include <stdio.h>
int sum_of_squares(int b)
{
    int c=b,d=0,i,arr[100];
    for(i=0;i<b;i++)
    {
        arr[i]=c;
        c--;
    }
    for(i=0;i<b;i++)
    {
        d=d+arr[i]*arr[i];
    }
    return d;
}

int difference_of_squares(int b)
{
    int result,c=b,d=0,i,arr[100];
    for(i=0;i<b;i++)
    {
        arr[i]=c;
        c--;
    }
    for(i=0;i<b;i++)
    {
        d=d+arr[i];
    }
    result=d*d-sum_of_squares(b);
    return result;
}

int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("%d",difference_of_squares(a));
    return 0;
}