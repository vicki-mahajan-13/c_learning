#include <stdio.h>
int main()
{
    int math,phy,chem,hind,eng,total,average;
    printf("Enter your marks\nMaths\n,Physics\n,Chemistry\n,Hindi\n,English\n");
    scanf("%d%d%d%d%d",&math,&phy,&chem,&hind,&eng);
    total=math+phy+chem+hind+eng;
    average=total/5;
    printf("Average is %d",average);
    return 0;
}


