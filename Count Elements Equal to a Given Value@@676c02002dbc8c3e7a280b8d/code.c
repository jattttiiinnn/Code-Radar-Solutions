#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d%d",&n,&k);
    int arr[n];
    int count;
    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&n,&k);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i] == arr[j+1])
            {
                count++;
            }
        }
    }
    printf("%d",count);
}