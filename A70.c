#include <stdio.h>

#define MAX 5

int queue[MAX];
int F = -1;
int R = -1;

void enqueue(int x) 
{
    if (F == -1) 
        F = 0;
    
    R++;
    queue[R] = x;
    printf("Enqueue : %d\n", x);
}

void dequeue() 
{
    printf("Dequeue : %d\n", queue[F]);
    F++;

    if (F > R)
    {
        F = -1;
        R = -1;
    }
}

void display() 
{
    printf("Queue elements: ");

    for (int i = F; i <= R; i++) 
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() 
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    display();

    return 0;
}
