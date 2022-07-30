#include <stdio.h>
int main()
{
    int A[4][4],B[4][4],C[4][4],i,j;
    printf("Enter 16 numbers for first matrix\n");
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
            scanf("%d",&A[i][j]);
    printf("Enter 16 numbers for second matrix\n");
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
            scanf("%d",&B[i][j]);
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)    
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    } 
    return 0;   
}

