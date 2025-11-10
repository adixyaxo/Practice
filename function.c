#include <stdio.h>

void factorial(int a)
{
    int i=1, f=1;
    for (i = 1; i <=a; i++)
    {
        f=f*i;
    }
    printf("\n Factorial is %d",f);
    
}

int main()
{
    int num;
    printf("\n Enter a number to find its factorial: ");
    scanf("%d", &num);
    factorial(num);
    return 0;
}