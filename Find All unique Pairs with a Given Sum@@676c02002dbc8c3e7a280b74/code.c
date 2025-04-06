// #include <stdio.h>

// int main()
// {
//     int n, sum;
//     scanf("%d%d",&n,&sum);
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[i] + arr[j] == sum)
//             {
//                 printf("%d %d\n", arr[i], arr[j]);
//             }
//         }
//     }
// }

#include <stdio.h>

int main()
{
    int n, sum;
    scanf("%d %d", &n, &sum);
    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)  // start from i+1 to avoid duplicates & same element
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
