#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int k=i; k>=1; k--){
            printf("%c ", 64+k);
        }
    printf("\n");
    }
}