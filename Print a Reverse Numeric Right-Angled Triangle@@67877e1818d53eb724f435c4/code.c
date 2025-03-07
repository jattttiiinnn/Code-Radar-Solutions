// Your code here...
#include <stdio.h>

int main(){
    // int n;
    // scanf("%d",&n);
    // for(int i=0; i<=n; i++){
    //     for(int j=1; j<n-i; j++){
    //         printf("%d ",j);
    //     }
    // printf("\n");

    // }
    int n;
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        int k = 1;
        for(int j=1; j<n-i; j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}