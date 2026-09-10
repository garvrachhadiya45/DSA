#include <stdio.h>

void main()
{
    int n ;
    printf("Enter n : ");
    scanf("%d",&n);

    for(int i=0 ; i<n ; i++)
    {
        for(int j=1 ; j<n-i ; j++)
        {
            printf(" ");
        }

        int num = 1;
        
        for (int j = 0; j <= i; j++)
        {
            printf("%d  ",num);
            num = num* (i-j) / (j+1);
        }

        printf("\n");
    }
}