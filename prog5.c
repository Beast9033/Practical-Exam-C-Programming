#include<stdio.h>

int main() 
{
    int rows = 5;
    int start = 10;
    
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for(int j = 0; j < rows - i; j++) 
        {
            printf("%d ", start - i - j);
        }
        printf("\n");
    }
    
    return 0;
}