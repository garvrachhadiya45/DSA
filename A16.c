#include <stdio.h>

void main()
{
    int n ;
    printf("Enter n : ");
    scanf("%d",&n);

    int a[n];

    for(int i=0 ; i<n ; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&a[i]);    
    }
    printf("Entered Numbers : ");

    for(int i=0 ; i<n ; i++)
    {
        printf("%d , ",a[i]);
    }
}