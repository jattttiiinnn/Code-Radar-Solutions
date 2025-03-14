#include <stdio.h>
#include <stdbool.h>

bool check(int a,int b)
{
    return (a>0 || b<0) && (a>0 || b<0);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (check(a,b))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}