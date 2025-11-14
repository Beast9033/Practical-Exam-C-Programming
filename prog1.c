#include<stdio.h>

int main()
{
    int a;

    printf("enter a 3-digit positive integer: ");
    scanf("%d", &a);

    if(a >= 100 && a <= 999)
    {
        int first = a / 100;
        int last = a % 10;
        int sum = first + last;
        
        printf("Sum of first and last digit is: %d", sum);
    }
    else
    {
        printf("please enter 3 digit number");
    }

    return 0;
}