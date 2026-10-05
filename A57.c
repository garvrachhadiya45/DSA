#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int stack[MAX];
int top=-1;

void push()
{
    int x;

    if(top==MAX-1)
    {
        printf("Stack Overflow\n");
        return;
    }

    printf("Enter Element : ");
    scanf("%d",&x);

    top++;
    stack[top]=x;
}

void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Deleted Element = %d\n",stack[top]);
    top--;
}

void display()
{
    int i;

    if(top==-1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("\nStack Elements\n");

    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}

void peep()
{
    int pos;

    if(top==-1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Enter Position From Top : ");
    scanf("%d",&pos);

    if(pos<=0 || pos>top+1)
    {
        printf("Invalid Position\n");
        return;
    }

    printf("Element = %d\n",stack[top-pos+1]);
}

void change()
{
    int pos,x;

    if(top==-1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Enter Position From Top : ");
    scanf("%d",&pos);

    if(pos<=0 || pos>top+1)
    {
        printf("Invalid Position\n");
        return;
    }

    printf("Enter New Value : ");
    scanf("%d",&x);

    stack[top-pos+1]=x;
}

void main()
{
    int ch;

    while(1)
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.Peep");
        printf("\n5.Change");
        printf("\n6.Exit");

        printf("\nEnter Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                peep();
                break;

            case 5:
                change();
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid Choice");
        }
    }
}