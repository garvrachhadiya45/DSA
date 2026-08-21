#include <stdio.h>

void main()
{
    int n , c=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
}