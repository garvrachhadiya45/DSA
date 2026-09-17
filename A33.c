#include <stdio.h>
#include <string.h>

int main()
{
    int n , i , j;

    printf("Enter number of total words : ");
    scanf("%d",&n);

    char word[n][100];

    for(i=0 ; i<n ; i++)
    {
        printf("Enter a word : ");
        scanf("%s" , word[i]);
    }

    int num;
    char ang[100] , temp; 

    printf("Enter a random number between 0 to %d : ",n-1);
    scanf("%d" , &num);

    if(num > n-1)
    {
        return 0;
    }

    printf("\n");

    printf("Word at %d is %s",num,word[num]);
    printf("\n");

    char w[100];
    strcpy(w,word[num]);

    printf("Enter anagram\n");
    scanf("%s",ang);

    if (strlen(word[num]) != strlen(ang))
    {
        printf("Not Anagram");
        return 0;
    }

    for(i=0 ; w[i]!='\0' ; i++)
    {
        for (int j = i+1; w[j] != '\0'; j++)
        {
            if(w[i] > w[j])
            {
                temp = w[i];
                w[i] = w[j];
                w[j] = temp;
            }
        }
    }

    for(i=0 ; ang[i]!='\0' ; i++)
    {
        for (int j = i+1; ang[j] != '\0'; j++)
        {
            if(ang[i] > ang[j])
            {
                temp = ang[i];
                ang[i] = ang[j];
                ang[j] = temp;
            }
        }
    }

    if(strcmp(w, ang)==0)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not anagram");
    }
    return 0;
}