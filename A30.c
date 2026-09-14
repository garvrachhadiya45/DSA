#include <stdio.h>
#include <string.h>

void main()
{
    char s1[100];
    int i;

    printf("Enter string :");
    gets(s1);

    int a = strlen(s1);

    for(i=0 ; i < a ; i++)
    {
        if(s1[i] >= 'A' && s1[i]<='Z')
        {
            s1[i] += 32;
        }
    } 

    puts(s1);

    for(i=0 ; i < a ; i++)
    {
        if(s1[i] >= 'a' && s1[i]<='z')
        {
            s1[i] -= 32;
        }
    } 

    puts(s1);
}    