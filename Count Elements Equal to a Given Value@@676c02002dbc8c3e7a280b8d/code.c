#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d%d",&n,&k);
    int arr[n];
    int count = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&n,&k);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] == k)
        {
            arr[i] = count;
            count++;
        }
    }
    printf("%d",count);
}