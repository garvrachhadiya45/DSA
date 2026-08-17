#include <stdio.h>

void main()
{
    int base , pow , ans=1;
    printf("Enter base : ");
    scanf("%d",&base);

    printf("Enter power : ");
    scanf("%d",&pow);

    for(int i=0 ; i<pow ; i++)
    {
        ans = ans * base;
    }
    printf("Power = %d", ans);
}