#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n , sum=0;

    printf("Enter n : ");
    scanf("%d", &n);

    int *ptr;

    for(int i=0 ; i<n ; i++)
    {
        printf("Enter a number : ");
        scanf("%d",(ptr+i));

        sum += *(ptr+i);
    }
    printf("sum = %d",sum);
}