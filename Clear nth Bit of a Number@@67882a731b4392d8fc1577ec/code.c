#include <stdio.h>

int clearbit(int n, int k)
{
    return (N & (~(1<<(k-1))));
}

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    printf("%d",n,k, clearbit(n,k));
    return 0;
}