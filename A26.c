#include <stdio.h>

void main()
{
    int n , i ,num;

    printf("Enter a number :");
    scanf("%d", &n);

    int arr[n+1];

    for(int i=0; i<n; i++)
    {
        printf("Enter a number :");
        scanf("%d", &arr[i]);
    }

    printf("Enter a num to add");
    scanf("%d",&num);

    for(i=n-1 ; i>0 ; i--)
    {
        if(num<arr[i])
        {
            arr[i+1]=arr[i];
        }
        else{
            arr[i+1]=num;
            break;
        }
    }
    for(int i=0; i<=n; i++)
    {
        printf("%d",arr[i]);
    }
}