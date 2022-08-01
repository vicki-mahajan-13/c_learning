#include <stdio.h>
int main()
{
    char s[]="vicki";
    int i,len;
    len=strlen(s);
    for(i=0;i<len;i++)
        printf("%c",s[i]);
    return 0;    
}