#include <stdio.h>

void main()
{
    int i , j;
    int m1[3][2] , m2[2][3] , m3[3][3];

    printf("Enter Element for array 1 :\n");
    
    for (i = 0; i < 3; i++)
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
        for (j = 0; j < 3; j++)
        {
            printf("Enter Element for position [%d][%d]",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }    
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m3[i][j]=0;
            for(int k=0; k<2 ; k++)
            {
                m3[i][j] = m3[i][j] + m1[i][k]*m2[k][j];
            }
        }    
    }

    printf("Product of Matrix : \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t",m3[i][j]);
        }    
        printf("\n");
    }
}    
