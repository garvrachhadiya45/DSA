#include <stdio.h>

void main()
{
    int n;
    printf("Enter total days : ");
    scanf("%d",&n);

    int year = n/365;

    n = n%365;

    int month = n/30;

    n = n%30;

    int days = n;

    printf("Years = %d",year);
    printf("Month = %d",month);
    printf("Days = %d",days);
}