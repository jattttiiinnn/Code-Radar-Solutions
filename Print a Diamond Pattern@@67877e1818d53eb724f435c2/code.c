// Your code here...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int row=1; row<=n; row++)
  {
    for(int col=1; col<n-row+1; col++)
    {
        printf(" ");
    }
    for(int col=1; col<=row*2-1; col++)
    {
        printf("*");
    }
    printf("\n");
  }
   for(int row=1; row<=n; row++)
  {
    for(int col=1; col<n-row; col++)
    {
        printf(" ");
    }
    for(int col=1; col<=row*2-1; col++)
    {
        printf("*");
    }
    printf("\n");
  }
}