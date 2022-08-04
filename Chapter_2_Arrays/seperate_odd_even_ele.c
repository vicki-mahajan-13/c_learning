//Write a program in C to separate odd and even integers in separate arrays
#include <stdio.h>
int main()
{
    int a[100];
    int i,n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter element to be stored in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The even elements are:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\n",a[i]);
        }
    }
    printf("The odd elements are:\n");    
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}