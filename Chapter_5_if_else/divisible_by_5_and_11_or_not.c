#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if (a%5==0)
        printf("%d is divisible by 5",a);
            else 
                if (a%11==0)
                    printf("%d is divisible by 11",a);
                        else  
                            printf("%d is not divisible by 5 or 11",a);
    return 0;
}


