#include<stdio.h>
#include<string.h>
#include<ctype.h>

int stack[50];
int top=-1;

void push(int x)
{
    top++;
    stack[top]=x;
}

int pop()
{
    return stack[top--];
}

void main()
{
    char prefix[50],ch;
    int i,a,b,result;

    printf("Enter Prefix Expression : ");
    scanf("%s",prefix);

    i=strlen(prefix)-1;

    while(i>=0)
    {
        ch=prefix[i];

        if(isdigit(ch))
        {
            push(ch-'0');
        }
        else
        {
            a=pop();
            b=pop();

            switch(ch)
            {
                case '+':
                    result=a+b;
                    break;

                case '-':
                    result=a-b;
                    break;

                case '*':
                    result=a*b;
                    break;

                case '/':
                    result=a/b;
                    break;

                case '^':
                    result=1;

                    while(b>0)
                    {
                        result=result*a;
                        b--;
                    }
                    break;
            }

            push(result);
        }

        i--;
    }

    printf("Answer = %d",pop());
}