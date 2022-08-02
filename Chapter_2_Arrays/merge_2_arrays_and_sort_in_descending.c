//Write a program in C to merge two arrays of same size sorted in decending order
#include <stdio.h>
int main()
{
    int a[100],b[100],c[200];
    int i,j,k;
    int n,m,o;
    printf("Enter size of first array : ");
    scanf("%d",&n);
    printf("Enter size of second array : ");
    scanf("%d",&m);
    printf("Enter elements in first array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements in second array\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    o = n + m;
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<m;j++)
    {
        c[i]=b[j];
        i++;
    }
    for(i=0;i<o;i++)
    {
        for(k=0;k<o-1;k++)
        {
            if(c[k]<=c[k+1])
            {
                j=c[k+1];
                c[k+1]=c[k];
                c[k]=j;
            }
        }    
    }
    printf("The merged array in descending order is : ");
    for(i=0;i<o;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}