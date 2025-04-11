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
    for(int i=0; i<n; i++)
    {
        if(arr[i] > min || arr[i] > arr[i+1])
        {
            printf("%d",arr[i]);
        }
    }
}