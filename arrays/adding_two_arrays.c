#include <stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    printf("Enter five numbers for first element\n");
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);
    printf("Enter five numbers for second element\n");
    for(i=0;i<=4;i++)
        scanf("%d",&b[i]);
    for(i=0;i<=4;i++)
    {
        c[i]=a[i]+b[i];
        printf("sum of %d and %d is %d\n",a[i],b[i],c[i]);
    }    
return 0;
}

