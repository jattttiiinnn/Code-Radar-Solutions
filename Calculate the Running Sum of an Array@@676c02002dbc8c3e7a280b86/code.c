#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int new_arr[n];
    for(int i=0; i<n; i++) 
    {
        scanf("%d",&arr[i]);
    }
    int sum=0
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
        new_arr[i] = sum;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d", new_arr[n]);
    }

}