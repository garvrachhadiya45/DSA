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
    
    int mxindex , mnindex;
    int max = a[0] , min = a[0];

    for(int i=0 ; i<n ; i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
            mxindex=i;
        }

        if(a[i]<=min)
        {
            min=a[i];
            mnindex=i;
        }
    }
    printf("Position of largest : %d\n",mxindex+1);

    printf("Position of smallest : %d\n",mnindex+1);
}