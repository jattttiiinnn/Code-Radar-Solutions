// Your code here...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < n - row - 1; col++)
        {
            printf(" ");
        }
        for(int col = 0; col < row + 1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<row; col++)
        {
            printf(" ");

        }
        for(int col=0; col<n-row; col++)
        {
            printf("* ");

        }
        printf("\n");
    }
}