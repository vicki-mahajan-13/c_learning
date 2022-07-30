//copy the elements of one array into another array
#include <stdio.h>
int main()
{
    int a[1000],b[1000],i,n;
    printf("Enter the numbers of elements to be stored in the array\n");
    scanf("%d",&n);
    printf("Enter %d elements for array\n",n);
    for(i=0;i<n;i++)
    {
        printf("Element %d :",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        b[i]=a[i];
    printf("Elements stored in first array\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    printf("Elements copied in second array\n");    
    for(i=0;i<n;i++)  
        printf("%d\n",b[i]);
        
}


