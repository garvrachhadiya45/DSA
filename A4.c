#include <stdio.h>

void main()
{
    int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d",&a);

    printf("Enter 2nd number : ");
    scanf("%d",&b);

    printf("Enter 3rd number : ");
    scanf("%d",&c);

    int max, min;

    max = (a>b) ? ((a>c) ? a:c) : ((b>c) ? b:c);
    min = (a<b) ? ((a<c) ? a:c) : ((b<c) ? b:c);

    printf("Largest number = %d", max);
    printf("Smallest number = %d", min);
}