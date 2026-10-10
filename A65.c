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

void main() 
{

    char infix[MAX], postfix[100];
    int i, j = 0;
    char Stack[MAX];        
    int  Top; 

    printf("Enter a string : ");
    scanf("%s", infix);   

    Top = -1;

    for (i = 0; infix[i] != '\0'; i++)
    {
        char ch = infix[i];

        if (isalnum(ch))
        {
            postfix[j++] = ch;
        }
        else if (ch == '(')
        {
            Stack[++Top] = ch;  
        }
        else if (ch == ')')
        {
            while (Stack[Top] != '(')
            {
                postfix[j++] = Stack[Top--];
            }
            Top--;
        }
        else
        {
            while (Top != -1 && pre(Stack[Top]) >= pre(ch))
            {
                postfix[j++] = Stack[Top--];
            }
            Stack[++Top] = ch;
        }
    }

    while (Top != -1)
    {
        postfix[j++] = Stack[Top--];
    }

    postfix[j] = '\0';

    printf("Postfix Expression: %s", postfix);

}