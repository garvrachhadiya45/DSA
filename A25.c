#include <stdio.h>

void main()
{
    int n , temp , pos;
    printf("Enter size of an array : ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0 ; i<n ; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);    
    }

    printf("Enter position : ");
    scanf("%d",&pos);

    for(int i=pos ; i<n ; i++)
    {
        arr[i-1] = arr[i];
    }
    
    printf("Final Array : ");
    for(int i=0 ; i<n-1 ; i++)
    {
        printf("%d , ",arr[i]);
    }
}