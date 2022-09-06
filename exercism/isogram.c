
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool is_isogram(const char *ptr)
{
    long unsigned int i,j,ctr=0;
    for(i=0;i<strlen(ptr);i++)
    {
        ctr=0;
        for(j=0;j<strlen(ptr);j++)
        {
            if(ptr[i]==ptr[j])
            ctr++;
        }
        if (ctr==1)
        {
            return true;
        }
        if(ctr>1)
        {
            return false;
        }

    }
return 0;
}