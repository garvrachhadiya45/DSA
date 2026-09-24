#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n , temp;

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

    for(int i=0 ; i<n ; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(*(ptr+i) > *(ptr+j))
            {
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        printf("%d , ",*(ptr+i));
    }
}