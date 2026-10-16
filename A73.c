#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int F = -1;
int R = -1;

void insertF() 
{
    int x;

    if ((F==0 && R==MAX - 1) || (F==R+1)) 
    {
        printf("Queue Overflow\n");
        return;
    }

    printf("Enter element : ");
    scanf("%d", &x);

    if (F==-1) 
    {
        F = 0;
        R = 0;
    } 
    
    else if (F==0) 
    {
        F = MAX-1;
    } 
    else 
    {
        F--;
    }

    queue[F] = x;
    printf("Insert : %d\n", x);
}

void insertR() 
{
    int x;

    if ((F==0 && R ==MAX - 1) || (F==R+1)) 
    {
        printf("Queue Overflow\n");
        return;
    }

    printf("Enter element : ");
    scanf("%d", &x);

    if (F== -1) 
    {
        F = 0;
        R = 0;
    } 
    else if (R==MAX-1) 
    {
        R = 0;
    } 
    else {
        R++;
    }

    queue[R] = x;
    printf("Insert : %d\n", x);
}

void deleteF() 
{
    if (F == -1) 
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted : %d\n", queue[F]);

    if (F == R) 
    {
        F = -1;
        R = -1;
    } 
    else if (F == MAX - 1) 
    {
        F = 0;
    } 
    else 
    {
        F++;
    }
}

void deleteR() 
{
    if (F == -1) 
    {
        printf("Queue Underflow!\n");
        return;
    }

    printf("Deleted : %d\n", queue[R]);

    if (F== R) 
    {
        F=-1;
        R=-1;
    } 
    
    else if (R == 0) 
    {
        R = MAX-1;
    } 
    else 
    {
        R--;
    }
}

void display() 
{
    if (F == -1) 
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue : ");

    int i = F;
    while (1==1) 
    {
        printf("%d ", queue[i]);
        if(i==R) 
        {
            break;
        }
        i = (i + 1) % MAX;
    }
}


int main() 
{
    int c;

    while (1==1)
    {
        printf("1. Insert at Front End\n");
        printf("2. Insert at Rear End\n");
        printf("3. Delete from Front End\n");
        printf("4. Delete from Rear End\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter c: ");
        scanf("%d", &c);

        switch (c) 
        {
            case 1:
                insertF();
                break;
            case 2:
                insertR();
                break;
            case 3:
                deleteF();
                break;
            case 4:
                deleteR();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid\n");
        }
    }
    return 0;
}

