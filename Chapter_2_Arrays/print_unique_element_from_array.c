//Write a program in C to print all unique elements in an array
#include <stdio.h>
int main()
{
    int a[5],b[5],i,j,c=0;
    printf("Enter five numbers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            c=0;
            if(b[i]!=a[j])
            {
                c++;
                if(c=1)
                {
                    b[i]=a[j];
                    printf("%d",b[i]);
                }
            }
        }
        break;
    }
    return 0;
}    



