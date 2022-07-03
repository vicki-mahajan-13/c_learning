#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    c=pow((a-b),3);
    printf("Answer is %d",c);
    return  0;
}

