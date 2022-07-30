#include <stdio.h>

void update(int *a,int *b) {
    int c=*b;
    int d=*a;
    if(d>c)
    {
        *b=d-c;
    }    
    else
    if(c>d)
    {
        *b=c-d;
    }
    *a=c+d;
    
       
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
