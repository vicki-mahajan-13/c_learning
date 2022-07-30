#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks);
    if (marks>=60)
        printf("1st division");
            else
               if(marks>=45&&marks<60)
                   printf("2nd division");
                      else
                         if(marks>=33&&marks<45)
                             printf("3rd division");
            else                   
               printf("You are fail");
     return 0;
}
                      
