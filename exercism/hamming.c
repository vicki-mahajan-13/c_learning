#include <stdio.h>
#include <string.h>
int compute(char* , char*);
int compute(char *ptr1 , char *ptr2)
{
    long unsigned int i; 
    int ctr=0;
    if(strlen(ptr1)==strlen(ptr2))
    {
        for(i=0;i<strlen(ptr1);i++)
        {
            if(ptr1[i]!=ptr2[i])
            {
                ctr++;
            }
        }
        return ctr;
    }
    return -1;
}

int main()
{
    char str1[100],str2[100];
    printf("Enter 1 string");
    gets(str1);
    printf("Enter 2 string");
    gets(str2);
    printf("%d",compute(str1,str2));
}