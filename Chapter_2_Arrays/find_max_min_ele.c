//Write a program in C to find the maximum and minimum element in an array
#include <stdio.h>
int main()
{
    int a[100];
    int n,i,max,min;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
            if(a[i]>max)
            {
                max=a[i];
            }
            if(a[i]<min)   
            {
                min=a[i];
            }
    }
    printf("%d is maximum\n",max);
    printf("%d is minimum",min);
    return 0;
}

