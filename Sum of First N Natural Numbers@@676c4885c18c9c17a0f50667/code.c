// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum = 0;
    while(sum <= n){  // Problem: loop runs one extra time
        int answer = sum + 1;
        sum++;
    }
    printf("%d",answer);
}