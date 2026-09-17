#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;

    printf("Enter size of an array ; ");
    scanf("%d", &n);

    int arr[n];

    int *ptr;
    ptr=arr;

    for(int i=0 ; i<n ; i++)
    {
        printf("Enter an Element : ");
        scanf("%d",(ptr+i));
    }
    
    for(int i=0 ; i<n ; i++)
    {
        printf("%d",*(ptr+i));
    }
}