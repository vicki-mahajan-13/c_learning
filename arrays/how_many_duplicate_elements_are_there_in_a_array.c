//count a total number of duplicate elements in an array
#include <stdio.h>
void main()
{
    int a[1000],b[1000],c[1000],n,i,j,mm=1,de=0;
    printf("Enter the number of elements to be stored in array\n");
    scanf("%d",&n);
    printf("Enter %d elements in the array\n",n);
    for(i=0;i<n;i++)
    {
        printf("Element %d : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        b[i]=a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                c[j]=mm;
                mm++;
            }
        }
        mm=1;
    }
    for(i=0;i<n;i++)
    {
        if(c[i]==2)
        {
           de++; 
        }    
    }
    printf("The total number of duplicate elements found in the array is %d\n",de);       
}

