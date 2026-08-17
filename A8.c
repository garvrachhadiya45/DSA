#include <stdio.h>

// void main()
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);

//     int fact = 1;

//     for(int i=1 ; i<=n ; i++)
//     {
//         fact = fact * i;
//     }
//     printf("Factorial = %d", fact);
// }

void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int x = factorial(n);

    printf("Factorial = %d", x);
}

int factorial(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}