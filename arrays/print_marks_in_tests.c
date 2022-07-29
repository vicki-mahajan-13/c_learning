//Write a program to print the marks obtained by a student in five tests.

#include <stdio.h>
int main()
{
    int a[2000],i,n;
    char str_arr[1000][20];
    printf("How many tests were done\n");
    scanf("%d",&n);
    printf("Enter Subject names\n");
    for(int i=0; i<n; i++)
     scanf("%s", &str_arr[i]);

    printf("Enter the marks\n");
    for(i=0;i<n;i++)
    {
        printf("%d.%s : ",i+1,str_arr[i]);
        scanf("%d",&a[i]);
    }
    printf("Marks obtained by a student in %d tests\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d.%s : %d\n",i+1,str_arr[i],a[i]);
    }

    return 0;
}   

   


    