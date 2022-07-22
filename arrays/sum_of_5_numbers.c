#include <stdio.h>
int main()
{
    int a[5], sum=0,i; 
    printf("Enter five numbers for sum\n");
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);
        printf("sum of ");
    for(i=0;i<=4;i++)
    {
        printf("%d",a[i]);
        sum=sum+a[i];
    }
    printf(" is %d",sum);
    return 0;  
}

