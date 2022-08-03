//Write a program in C to count the frequency of each element of an array
#include <stdio.h>
int main()
{
    int a[100],b[100];
    int i,j,n,ctr;
    printf("Enter size of the arrry\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=1;
    }
    for(i=0;i<n;i++)
    {
        ctr=1;
        for(j=1+i;j<n;j++)
        {
            if(a[i]==a[j])
            {
                ctr++;
                b[j]=0;
            }
        }
        if(b[i]!=0)
        {
            b[i]=ctr;
        }
    }
    printf("The frequency of all elements :\n");    
    for(i=0;i<n;i++) 
    {
        if(b[i]!=0)
        {
            printf("%d occurs %d times",a[i],b[i]);
        }
    }  
    return 0;
} 