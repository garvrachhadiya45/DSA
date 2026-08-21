#include <stdio.h>

void main()
{
    int a , b , c=0;
    printf("Enter starting number : ");
    scanf("%d",&a);

    printf("Enter ending number : ");
    scanf("%d",&b);

    for(int i=a ; i<=b ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d  ,  " , i);
        }
        c=0;
    }
}