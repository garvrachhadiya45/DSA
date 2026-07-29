#include <stdio.h>

void main()
{
    int n;
    printf("Enter year : ");
    scanf("%d",&n);

    if(n%400==0)
    {
        printf("Leap year");
    }
    else if(n%100==0)
    {
        printf("Not Leap year");
    }
    else if(n%4==0)
    {
        printf("Leap year");
    }
    else{
        printf("Not Leap year");
    }
}