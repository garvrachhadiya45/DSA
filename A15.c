#include <stdio.h>

void main()
{
    int a , b , sum=0 , rem , temp , c=0 , count;
    printf("Enter starting number : ");
    scanf("%d",&a);

    printf("Enter ending number : ");
    scanf("%d",&b);

    for(int i=a ; i<=b ; i++)
    {
        temp = i;
        count = i;

        while(count > 0)
        {
            rem = count % 10;
            c++;
            count /= 10;
        }

        while(temp > 0)
        {
            rem = temp % 10;
            sum += power(rem , c);
            temp /= 10; 
        }
        if(i==sum)
        {
            printf("%d  ,  " , i);
        }
        c=0;
        sum=0;
    }
}
int power(int x , int c)
{
    int ans=1;
    for(int i=0 ; i<c ; i++)
    {
        ans *= x;
    }
    return ans;
}