#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter radius of circle");
    scanf("%f",&a);
    b=3.14*(pow((a),2));
    printf("Area of circle is %f",b);
    return 0;
}

