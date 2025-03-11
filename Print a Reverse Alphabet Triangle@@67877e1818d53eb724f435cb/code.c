#include <stdio.h>

int main() {
    // int n;
    // scanf("%d",&n);
    // for(int i=1; i<=n; i++){
    //     for(int k=i; k>=1; k--){
    //         printf("%c ", 64+k);
    //     }
    // printf("\n");
    // }
    int n;
    scanf("%d",&n);
    for(int i=n; i>=1; i--) {
    for(int k=1; k<=i; k++) {
        printf("%c ", 64+k);
    }
    printf("\n");
    }
}