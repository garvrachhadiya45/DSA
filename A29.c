#include <stdio.h>

void main()
{
    int n1 , n2  ,n;

    printf("Enter size of array 1 :");
    scanf("%d", &n1);

    int arr1[n1];

    for(int i=0; i<n1; i++)
    {
        printf("Enter a number :");
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of array 2 :");
    scanf("%d", &n2);

    int arr2[n2];

    for(int i=0; i<n2; i++)
    {
        printf("Enter a number :");
        scanf("%d", &arr2[i]);
    }

    n=n1+n2;
    int arr[n];

        for(int j=0; j<n1 ; j++)
        {
            arr[j]=arr1[j];
        }
        
        for(int j=0; j<n2 ; j++)
        {
            arr[n1+j]=arr2[j];
        }

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}