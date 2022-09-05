//Determine if a word or phrase is an isogram
void is_isogram(char *ptr)
{
    printf("%s",ptr);
}

#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string");
    scanf("%[^/n]s",str);
    is_isogram(str);
}