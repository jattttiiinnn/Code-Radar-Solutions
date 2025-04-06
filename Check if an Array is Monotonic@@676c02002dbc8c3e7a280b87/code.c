// Your code here...
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sorted[n];
    for(int i=0; i<n; i++) 
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int isSorted = 1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != sorted[i])
        {
            isSorted = 0;
            break;
        }
    }
    if(isSorted) printf("YES");
    else printf("NO");
}