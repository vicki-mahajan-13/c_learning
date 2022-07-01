#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?(a>c)?printf("%d is maximum",a):printf("%d is maximum",c):(b>c)?printf("%d is maximum",b):("%d is maximum",c);
    return 0;

}