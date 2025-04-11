#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int CopyArr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        CopyArr[i] = arr[i];
    }
    // for(int i=0; i<n; i++)
    // {
    //     if(arr[i] == CopyArr[i+1])
    //     {
    //         printf("%d",arr[i]);
    //         break;
    //     }
    // }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j] == arr[j+1])
            {
                printf("%d", arr[j]);
                break;
            }
        }
    }
}