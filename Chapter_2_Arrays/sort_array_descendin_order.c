//Write a program in C to sort elements of array in descending order
#include <stdio.h>
int main()
{
    int a[100];
    int i,j,n,t;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter elements to be stored in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array in sorted ascending order :\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        if(a[i]<=a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        printf("%d",a[i]);
    }
}