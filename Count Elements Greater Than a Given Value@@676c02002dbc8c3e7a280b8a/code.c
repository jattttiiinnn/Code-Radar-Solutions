#include <stdio.h>

int main()
{
    int n, target, count = 0;
    scanf("%d%d", &n, &target);
    int arr[n];

    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j] > target)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
