#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int max = INT_MIN;
    int min = -1;
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
        else if(arr[i] % 2 != 0)
        {
            arr[i] = min;
        }
    }
    printf("%d",max);
    printf("%d", min);
}