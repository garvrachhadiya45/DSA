#include <stdio.h>

void main()
{
    int n , temp , pos;
    printf("Enter size of an array : ");
    scanf("%d",&n);

    int arr[n+1];

    for(int i=0 ; i<n ; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);    
    }

    printf("Enter number for add : ");
    scanf("%d",&arr[n]);

    printf("Enter position : ");
    scanf("%d",&pos);

    for(int i=0 ; i<n-pos+1 ; i++)
    {
        temp=arr[n-i];
        arr[n-i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
    printf("Final Array : ");
    for(int i=0 ; i<=n ; i++)
    {
        printf("%d , ",arr[i]);
    }
}