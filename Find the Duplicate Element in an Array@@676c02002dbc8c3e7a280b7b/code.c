#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int CopyArr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i])
        CopyArr[i] = arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] == CopyArr[i])
        {
            printf("%d",arr[i]);
        }
    }
}