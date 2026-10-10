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
        if(next=='*')
        { 
            Top--;    
        }   
        else
        {
            Stack[Top] = next;  
            Top++;  
        }  
        next = str[pos++];
    }

    for(int i=0 ; i<Top ; i++)
    {
        printf("%c",Stack[i]);
    }
}