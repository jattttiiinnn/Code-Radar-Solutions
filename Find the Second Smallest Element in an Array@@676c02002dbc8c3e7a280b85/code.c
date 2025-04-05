// Your code here...
// Your code here...
#include<stdio.h>
#include<limits.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
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
    int found = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > arr[0])
        {
            printf("%d", arr[i]);
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("-1");
    }
}