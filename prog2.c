#include<stdio.h>

int main()
{
    char string[100];

    int length = 0;
    int *p;
    
    printf("Enter Any String: ");
    gets(string);

    p = &length;

    for (int i=0; string[i] != '\0'; i++)
    {
        length++;
    }

    printf("The length is: %d", *p);

    return 0;
}