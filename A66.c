#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int pre(char c) 
{
    if (c == '^') 
        return 3;
    else if (c == '*' || c == '/') 
        return 2;
    else if (c == '+' || c == '-') 
        return 1;
    else 
        return 0;
}


void reverse(char *str) 
{
    int l = strlen(str);

    for (int i = 0; i < l / 2; i++) 
    {
        char temp = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = temp;
    }
}

int main() 
{
    char in[MAX], temp[MAX], prefix[MAX];
    char Stack[MAX];
    int Top = -1;
    int i, j = 0;

    printf("Enter an infix expression : ");
    scanf("%s", in);

    strcpy(temp, in);
    reverse(temp);

    
    for (i = 0; temp[i] != '\0'; i++) 
    {
        if (temp[i] == '(') 
        {
            temp[i] = ')';
        } 
        
        else if (temp[i] == ')') 
        {
            temp[i] = '(';
        }
    }

    
    for (i = 0; temp[i] != '\0'; i++) 
    {
        char ch = temp[i];
        
        if (isalnum((unsigned char)ch)) 
        {
            prefix[j++] = ch;
        } 
        
        else if (ch == '(') 
        {
            Stack[++Top] = ch;
        } 
        
        else if (ch == ')') 
        {
            while (Top != -1 && Stack[Top] != '(') 
            {
                prefix[j++] = Stack[Top--];
            }

            if (Top != -1) 
            {
                Top--; 
            }
        } 
        
        else 
        {
            while (Top != -1 && pre(Stack[Top]) > pre(ch)) 
            {
                prefix[j++] = Stack[Top--];
            }

            Stack[++Top] = ch;
        }
    }

    while (Top != -1) 
    {
        prefix[j++] = Stack[Top--];
    }

    prefix[j] = '\0';

    reverse(prefix);

    printf("Prefix : %s", prefix);

    return 0;
}
