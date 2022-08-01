// Write a program to find the sum of N numbers in an array
#include <stdio.h>
int main()
{
    int sum=0,i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers for sum\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("sum is ");
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;  
}
