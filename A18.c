#include <stdio.h>

void main()
{
    int a , n;
    float sum = 0;
    printf("Enter size of an array : ");
    scanf("%d",&a);

    int arr[a];

    for(int i=0 ; i<a ; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);    
    }
    
    printf("Enter n : ");
    scanf("%d",&n);

    for(int i=0 ; i<n ; i++)
    {
        sum += arr[i];
    }
    printf("average = %f" , sum/n);
}