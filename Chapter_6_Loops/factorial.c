#include <stdio.h>
int main()
{
    int i,j,k,l=1;
    printf("Enter two numbers for factorial\n");
    scanf("%d\n%d",&i,&j);
    for (k=i;k<=j;k++)
    {
        l=l*k;
    }
    printf("Answer is %d",l);
    return 0;
}