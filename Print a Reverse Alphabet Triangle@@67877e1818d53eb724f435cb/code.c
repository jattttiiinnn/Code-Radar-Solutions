// Your code here...
#include <stdio.h>

int main() {
    int n;
    printf("%d",&n);
    for(int i=1; i<n; i++){
        for(int j=1; j<n-1; j++){
            printf("%c ", 64 - j);
        }
    printf("\n");
    }
}