#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int hcf=1;
    printf("enter the number :");
    scanf("%d",&a);
    for (int i = 2; i < a; i++)
    {
        if (a%i==0)
        {
            hcf=i;
        }
        
    }
    printf("%d",hcf);

    return 0;
}