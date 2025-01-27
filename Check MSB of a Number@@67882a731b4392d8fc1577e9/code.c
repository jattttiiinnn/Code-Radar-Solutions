#include <stdio.h>
#define BITS sizeof(int)*8

int main()
{
    int a,msb;
    scanf("%d",&a);
    msb = 1 << (BITS-1);
    if (num & msb)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
}