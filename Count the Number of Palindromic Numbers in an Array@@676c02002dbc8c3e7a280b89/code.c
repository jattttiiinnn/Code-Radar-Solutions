#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int isPalindrome = 1, sum = 0;
    for(int i=0; i<n/2; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            isPalindrome = 0;
            sum += arr[i];
        }
    }
    if(!isPalindrome) printf("%d", sum);
    return 0;
}
