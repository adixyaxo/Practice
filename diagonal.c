#include <stdio.h>

int main()
{
    int arr[5][5];
    int r, c;

    printf("Enter the values for a 5x3 array:\n");

    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("Enter value for arr[%d][%d]: ", r, c);
            scanf("%d", &arr[r][c]);
        }
    }

    printf("\nThe array elements are:\n");
    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("%d\t", arr[r][c]);
        }
        printf("\n");
    }
    printf("\n \n The Trace or diagonal of the matrix is\n");
    for (int r = 0; r < 5; r++)
    {
        printf("%d\t",arr[r][r]);
    }
    printf("\n \n The lower triangular of the matrix is\n");
    for (int r = 0; r<5; r++)
    {
        for (int c = 0; c < r; c++)
        {
            printf("%d\t",arr[r][c]);
        }
        printf("\n");
    }
    printf("\n \n The upper triangular of the matrix is\n");
    for (int r = 0; r<5; r++)
    {
        for (int c = 0; c <5; c++)
        {
            if (c>r)
            {
                printf("%d\t",arr[r][c]);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
    
    return 0;
}