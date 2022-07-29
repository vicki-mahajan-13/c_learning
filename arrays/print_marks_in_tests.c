//Write a program to print the marks obtained by a student in five tests.

#include <stdio.h>
int main()
{
    int a[2000],i,n;
    printf("how many tests were done\n");
    scanf("%d",&n);
    printf("Enter the marks of that %d tests\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("marks obtained by a student in %d tests\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}   


    