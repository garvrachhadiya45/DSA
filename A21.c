#include <stdio.h>

void main()
{
    int n, a , b;
    printf("Enter size of an array : ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0 ; i<n ; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);    
    }

    printf("Enter number for replace : ");
    scanf("%d",&a);

    printf("Enter number to replace : ");
    scanf("%d",&b);

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == a)
        {
            printf("%d",i);
            arr[i] = b;
        }
    }
    
    printf("Final Array : ");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d , ",arr[i]);
    }
}