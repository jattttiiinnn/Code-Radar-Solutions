#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int copy_arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        copy_arr[i] = arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int median;
    if(n % 2 == 0)
    {
        // Average of two middle elements
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    }
    else
    {
        // Middle element
        median = arr[n/2];
    }

    printf("%d", median);
}