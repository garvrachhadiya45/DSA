#include <stdio.h>
#include <string.h>

#define MAX 100

void main() 
{
    char Stack[MAX];        
    char str[MAX];   
    int  Top;            
    int  pos = 0;         
    char next, X;
    int  valid = 1;      

    printf("Enter a string : ");
    scanf("%s", str);   

    Top = 0;
    Stack[Top] = 'c';

    next = str[pos++];

    while (next != 'c') 
    {
        if (next == '\0') 
        {          
            valid = 0;
            break;
        }
        Top++;
        Stack[Top] = next;               
        next = str[pos++];
    }

    if (valid == 1) 
    {
        while (Stack[Top] != 'c') 
        {
            next = str[pos++];
            X = Stack[Top];
            Top--;                   
            if (next != X) {
                valid = 0;
                break;
            }
        }
    }

    if (valid == 1) 
    {
        next = str[pos++];

        if (next != '\0') {
            valid = 0;
        }
    }

    if (valid == 1)
        printf("Valid\n");

    else
        printf("Invalid");
}