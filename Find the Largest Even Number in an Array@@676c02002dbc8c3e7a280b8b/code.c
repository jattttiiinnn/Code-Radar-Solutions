#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] > max && arr[i] % 2 == 0)
        {
            max = arr[i];

        }
        else printf("-1");
    }
    printf("%d",max);
}