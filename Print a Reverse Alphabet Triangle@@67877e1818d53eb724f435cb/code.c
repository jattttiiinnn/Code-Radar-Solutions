#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=n; i<=n; i++){
        for(int k=1; k<=i; k++){
            printf("%c ", 64+k);
        }
    printf("\n");
    }
}