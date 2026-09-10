#include <stdio.h>

void main()
{
    int a, c=0;
    printf("Enter size of an array : ");
    scanf("%d",&a);

    int arr[a];

    for(int i=0 ; i<a ; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);    
    }

    for(int i=0 ; i<a ; i++)
    {
        for(int j=i+1 ; j<a ; j++)
        {
            if(arr[i] == arr[j])
            {
                c++;
                printf("Duplicate found");
                break;
            }
        }
        if(c==1)
        {
            break;
        }
    }
    if(c==0)
    printf("Duplicate not found");
}