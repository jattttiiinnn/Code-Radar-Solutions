#include <stdio.h>

int main()
{
    int n, sum;
    scanf("%d%d",&n,&sum);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        int element = arr[i];
        for(int j=0; j<n; j++)
        {
            if(element + arr[j] == sum)
            {
                printf("%d%d", element, arr[j]);
            }
        }
    }
}