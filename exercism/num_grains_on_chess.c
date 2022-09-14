#include <stdio.h>
int square(int b)
{
   long unsigned int i,d=1;
        for(i=1;i<65;i++)
        {
            d=d+d;
            if(i==b)
            {
                break;
            }
        }
        return d;
}

int main()
{
    int a,b;
    printf("Enter the num of square in chess");
    scanf("%d",&a);
    b=square(a);
    printf("%d",b);
}









