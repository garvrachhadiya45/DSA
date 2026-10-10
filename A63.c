#include <stdio.h>
#include <string.h>

#define MAX 200 

int main() {
    int n = 4;
    int arr[100][2];
    int Stack[MAX]; 
    int Top = -1;      

    for(int i = 0; i < n; i++) 
    {
        printf("Enter start : ");
        scanf("%d", &arr[i][0]);

        printf("Enter end : ");
        scanf("%d", &arr[i][1]);
    }

    for(int i = 0; i < n - 1; i++) 
    {
        for(int j = 0; j < n - i - 1; j++) 
        {
            if(arr[j][0] > arr[j + 1][0]) 
            {
                int temp1 = arr[j][0];
                arr[j][0] = arr[j + 1][0];
                arr[j + 1][0] = temp1;
                
                int temp2 = arr[j][1];
                arr[j][1] = arr[j + 1][1];
                arr[j + 1][1] = temp2;
            }
        }
    }

    Stack[++Top] = arr[0][0]; 
    Stack[++Top] = arr[0][1]; 

    for(int i = 1; i < n; i++) 
    {
        int a2 = Stack[Top]; 
        int b1 = arr[i][0];
        int b2 = arr[i][1];

        if (a2 >= b1) 
        {
            if (b2 > a2) 
            {
                Stack[Top] = b2;
            }
        } 
        
        else 
        {
            Stack[++Top] = b1;
            Stack[++Top] = b2;
        }
    }

    for(int i = 0; i <= Top; i += 2) 
    {
        printf("{%d, %d} , ", Stack[i], Stack[i + 1]);
    }
    printf("\n");

    return 0;
}