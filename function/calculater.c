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
void main()
{
    
    int a,b,c;
    do
    {
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
                case 1:printf("%d\n",add(a,b));
                break;
                case 2:printf("%d\n",substract(a,b));
                break;
                case 3:printf("%d\n",multiply(a,b));
                break;
                case 4:printf("%d\n",divide(a,b));
                break;
                case 5:exit (0);
            }
        } 
        else
            printf("Invalid Choice");    
    }
    while(1);
}      
