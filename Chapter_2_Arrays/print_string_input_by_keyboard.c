#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the length of your name");
    scanf("%d",&n);
    char arr[n];
    char temp;
    scanf("%c",&temp);
    printf("Enter your name");
       scanf("%[^\n]",arr);
    for(i=0;arr[i]!='\0';i++)
       printf("%c",arr[i]);
    return 0;      
}