int add (int a, int b)
{
    return (a+b);
}

int substract (int a, int b)
{
    return (a-b);
}

int multiply (int a, int  b)
{
    return (a*b);
}

int divide (int a, int b)
{
    return (a/b);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&c);
    if (c<=5)
    {
        if(c>=5)
        {
            exit (0);
        }
        printf("Enter two numbers\n");
        scanf("%d%d",&a,&b);
        switch(c)
        {
            case 1:printf("%d",add(a,b));
            break;
            case 2:printf("%d",substract(a,b));
            break;
            case 3:printf("%d",multiply(a,b));
            break;
            case 4:printf("%d",divide(a,b));
            break;
            case 5:exit (0);
        }
    } 
    else
        printf("Invalid Choice");
    return 0;
}