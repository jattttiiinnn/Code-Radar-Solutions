// Your code here...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int row=1; row<=n; row++){
      for(int col=1; col<n-row; row++){
        printf(" ");
      }
      for(int stars=1; stars<col; stars++){
        printf("*");
      }
      printf("\n");
    }
}