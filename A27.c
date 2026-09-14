#include <stdio.h>

void main()
{
    int n , i , num , c=0;

    printf("Enter a number :");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter a number :");
        scanf("%d", &arr[i]);
    }

    printf("Enter a num to delete");
    scanf("%d",&num);

    for(i=0 ; i<n ; i++)
    {
        if(arr[i] == num)
            {
                c++;
            }
    }

    for(i=0; i<c; i++)
    {
        for(int j=0; j<n-i ; j++)
        {
            if(arr[j]==num)
            {
                for(int k=j; k<n-i; k++)
                {
                    arr[k]= arr[k+1];
                }
            }
        }
    }

    for(int i=0; i<n-c; i++)
    {
        printf("%d",arr[i]);
    }
}