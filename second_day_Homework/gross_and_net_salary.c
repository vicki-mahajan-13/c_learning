#include <stdio.h>
int main()
{
    float bs,ta=10,da=500,gs,ns,pf=7.8;
    printf("Enter you basic salary\n");
    scanf("%f",&bs);
    gs=bs+bs/ta+da;
    printf("Gross salary is %f\n",gs);
    ns=gs-bs/pf;
    printf("Net salary is %f",ns);
    return 0;
}

