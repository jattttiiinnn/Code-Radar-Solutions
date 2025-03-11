// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum = 0;
    while(int i <= n){
        sum = sum + i;
        sum++;
        printf("%d",sum);
    }
}