#include <stdio.h>

void main()
{
    int n , i ;

    printf("Enter a number :");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter a number :");
        scanf("%d", &arr[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j; k<n-1; k++)
                {
                    arr[k]= arr[k+1];
                }
                n--;
                j--;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}