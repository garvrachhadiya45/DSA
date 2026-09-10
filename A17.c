#include <stdio.h>

void main()
{
    int a , m , n , sum=0;
    printf("Enter size of an array : ");
    scanf("%d",&a);

    int arr[a];

    for(int i=0 ; i<a ; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);    
    }
    
    printf("Enter m : ");
    scanf("%d",&m);

    printf("Enter n : ");
    scanf("%d",&n);

    for(int i=m-1 ; i<n ; i++)
    {
        sum += arr[i];
    }
    printf("sum of m = %d to n = %d elements = %d" , m , n ,sum);
}