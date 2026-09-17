#include <stdio.h>

void main()
{
    int i , j;
    int m1[2][2] , m2[2][2] , m3[2][2];

    printf("Enter Element for array 1 :\n");
    
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter Element for position [%d][%d]",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }    
    }
    
    printf("Enter Element for array 2 :\n");
    
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter Element for position [%d][%d]",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }    
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }    
    }

    printf("Sum of Matrix : \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t",m3[i][j]);
        }    
        printf("\n");
    }
}    