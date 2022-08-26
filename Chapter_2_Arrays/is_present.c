#include <stdio.h>
int main()
{
    int a[5],i,n,j,c=0;
    printf("Enter five elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be check\n");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {   
        if(n==a[i])
        {
            c++;
            break;
        }
    }
    if(c>0)
    {
       printf("%d is present",n);
    }
    else
    {
        printf("%d is not present",n);
    }
        
    return 0;
}    