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
        sorted[i] = arr[i];
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
    int increasing = 1, decreasing = 1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > arr[i-1] ) decreasing = 0;
        if(arr[i] < arr[i-1]) increasing = 0;
    }
    if(increasing || decreasing) printf("YES");
    else printf("NO");
}