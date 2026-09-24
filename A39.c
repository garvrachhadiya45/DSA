#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *p;

    printf("Enter string: ");
    scanf("%s", str);

    int len = strlen(str);

    p = str;

    int flag = 1;

    for(int i=0;i<len/2;i++)
    {
        if(*(p+i) != *(p+len-1-i))
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}