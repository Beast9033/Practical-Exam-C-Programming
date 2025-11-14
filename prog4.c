#include<stdio.h>

void sumArr(int *a, int *b, int *sum, int n) 
{
    for (int i = 0; i < n; i++){
        *(sum + i) = *(a + i) + *(b + i);
    }
}

int main() 
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];

    printf("Enter %d elements for array A: ", n);
    for(i = 0; i < n; i++) 
    {
        printf("\nA[%d] = ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for array B: ", n);
    for(i = 0; i < n; i++) 
    {
        printf("\nB[%d] = ", i);
        scanf("%d", &arr2[i]);
    }

    sumArr(arr1, arr2, sum, n);

    printf("Sum of the two arrays:");
    for (i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}