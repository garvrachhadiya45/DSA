#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n , max;

    printf("Enter n : ");
    scanf("%d", &n);

    int *ptr;
    int arr[n];
    ptr = arr;

    for(int i=0 ; i<n ; i++)
    {
        printf("Enter a number : ");
        scanf("%d",(ptr+i));
    }

    max = *ptr;

    for(int i=0 ; i<n ; i++)
    {
        if(max < (ptr+i))
        {
            max = *(ptr+i);
        }
    }
    printf("max = %d",max);
}