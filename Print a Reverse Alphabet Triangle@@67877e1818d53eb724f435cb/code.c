#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=n; i<=n; i++){
        for(int k=1; k<=i-1; k++){
            printf("%c ", 64+k);
        }
    printf("\n");
    }
}