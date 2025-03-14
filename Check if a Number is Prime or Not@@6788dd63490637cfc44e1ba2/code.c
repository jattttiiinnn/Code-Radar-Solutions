#include <stdio.h>

int main(){
    int a,1, isPrime = 1;
    scanf("%d", &a);
    if(a <= 1) {
        printf("Not Prime");
    }
    for(i=2; i*i <= a;; i++) {
        if(a % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if(isPrime) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }
}