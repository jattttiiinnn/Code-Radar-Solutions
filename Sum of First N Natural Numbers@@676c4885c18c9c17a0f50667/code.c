// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum = 0;
    while(n < 0){
        sum = sum + 1;
        printf("%d",sum);
        sum++;
    }
}