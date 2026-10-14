#include<stdio.h>
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
    char postfix[50],ch;
    int i=0,a,b,result;

    printf("Enter Postfix Expression : ");
    scanf("%s",postfix);

    while(postfix[i]!='\0')
    {
        ch=postfix[i];

        if(isdigit(ch))
        {
            push(ch-'0');
        }
        else
        {
            b=pop();
            a=pop();

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

        i++;
    }

    printf("Answer = %d",pop());
}