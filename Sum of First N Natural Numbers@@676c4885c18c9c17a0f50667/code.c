// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum = 0;
    int i = 1;
    while( i <= n){  // Problem: loop runs one extra time
        sum = sum + i;
        i++;
    }
    printf("%d",sum);
}