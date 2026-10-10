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
    next = str[pos++];

    while(next != '\0') 
    { 
        if (next == '{' || next == '(' || next == '[') 
        {
            Top++;
            Stack[Top] = next;
        } 
        else 
        {
            if (Top == -1) 
            {
                break;
            }
            
            if ((next == '}' && Stack[Top] == '{') ||
                (next == ')' && Stack[Top] == '(') ||
                (next == ']' && Stack[Top] == '[')) {
                Top--; 
            } 
            else 
            {
                break; 
            }
        }
        
        next = Stack[pos++]; 
    } 
    
    if (Top == 0)
        printf("Valid\n");

    else
        printf("Invalid");
}