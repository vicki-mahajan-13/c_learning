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
int square_of_sum(int b)
{
    int c=b,d=0,i,arr[100];
    for(i=0;i<b;i++)
    {
        d=d+c;
        c--;
    }
    return d*d;
}

int difference_of_squares(int b)
{
    return square_of_sum(b) - sum_of_squares(b);
}

int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("%d",difference_of_squares(a));
    return 0;
}