int sum(int a, int b)
{  
    int s;
    s=a+b;
    return s;
}

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("sum is %d",sum(a,b));
    return 0;

}

