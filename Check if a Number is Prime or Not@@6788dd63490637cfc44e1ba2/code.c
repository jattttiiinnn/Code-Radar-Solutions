#include <stdio.h>

int main(){
    int a;
    int isPrime = 1;
    for (int i=2; i<a; i++){
        if (a%i == 0){
            printf("Not Prime");
            isPrime = 0;
            break;
        }
    }
    if (isPrime){
        printf("Prime");
    }
}