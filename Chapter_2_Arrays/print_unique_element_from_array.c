//Write a program in C to print all unique elements in an array
#include <stdio.h>
int main()
{
    int a[1000],b[1000],c[1000],i,j,n,ctr=0;
    printf("Enter number of elements to be stored in array\n");
    scanf("%d",&n);
    printf("Enter %d elements in the array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        ctr=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                ctr++;
            }
        }
        if(ctr==1)
        {
            printf("%d",a[i]);
        }
        else
        {
            if(ctr>1)
            {
                printf("%d",a[i]);
                break;
            }
        }
    }
    return 0;
}