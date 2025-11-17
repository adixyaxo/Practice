#include <stdio.h>
#include <stdlib.h>

int fac(int n)
{
    if (n==0)
    {
        return 1;
    }
    else return n*fac(n-1);
    
}


int main() {
    printf("%d",fac(5));
    return 0;
}