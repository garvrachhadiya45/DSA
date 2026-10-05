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

    while (next != '\0') 
    {   
        if(next=='a')
        {
            Stack[Top] = next;  
            Top++;  
        }           
        next = str[pos++];
    }

    pos = 0;

    next = str[pos++];
 
    while (next != '\0') 
    {
        if(next=='b')
        { 
            Top--;    
        }     
        next = str[pos++];          
    }

    if (Top == 0)
        printf("Valid\n");

    else
        printf("Invalid");
}