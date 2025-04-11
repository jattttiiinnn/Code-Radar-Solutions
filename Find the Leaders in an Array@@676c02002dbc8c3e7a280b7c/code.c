#include <stdio.h>
#include <limits.h>
int main()
{
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = INT_MIN;
    int leaders[n];
    int index = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > min)
        {
            leaders[index++] = arr[i];
            min = arr[i];
        }
    }
    for(int i=index - 1; i>=0; i--)
    {
        printf("%d ", leaders[i]);
    }
}