#include <stdio.h>
#include <string.h>

#define MAX 100

void rev(char str[]) 
{
    int l = strlen(str);

    for (int i = 0; i < l / 2; i++) 
    {
        char temp = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = temp;
    }
}

int main() 
{
        char Stack[MAX];        
        char str[MAX];   
        int  Top;            
        int  pos = 0;         
        char next;      

        printf("Enter a String : ");
        scanf("%s", str);   

        Top = -1; 
        next = str[pos++];

        while (next != '\0') 
        {           
            if(next=='a' || next=='e' || next=='i' || next=='o' || next=='u')
            { 
                Stack[Top + 1] = '\0'; 
                rev(Stack);  
                Stack[++Top] = next;   
            }   
            else
            {
                Stack[++Top] = next;  
            }  
            next = str[pos++];
        }

        for(int i=0 ; i<=Top ; i++)
        {
            printf("%c",Stack[i]);
        }

        printf("\n"); 

    return 0;
}
