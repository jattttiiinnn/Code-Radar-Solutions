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
    int isFound = 0;
    for(int i=0; i<n; i++)
    {
        // if(arr[i] > max && arr[i] % 2 == 0)
        // {
        //     max = arr[i];

        // }
        if(arr[i] % 2 == 0)
        {
            if(!isFound || arr[i] > max)
            {
                max = arr[i];
                isFound = 1;
            }
        }
    }
    if(!isFound)
    {
        printf("%d", max);
    }
    else
    {
        printf("%d","-1");
    }
}