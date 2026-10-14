#include<stdio.h>

int main()
{
    int t,n,i;
    int a[100];
    int stack[100];
    int top=-1;
    int x;

    printf("Enter Number of Test Cases : ");
    scanf("%d",&t);

    while(t--)
    {
        printf("Enter Number of Elements : ");
        scanf("%d",&n);

        printf("Enter Elements : ");

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        top=-1;
        x=1;

        for(i=0;i<n;i++)
        {
            top++;
            stack[top]=a[i];

            while(top!=-1 && stack[top]==x)
            {
                top--;
                x++;
            }
        }

        if(top==-1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}