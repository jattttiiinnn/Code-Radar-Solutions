#include <stdio.h>

int main(){
    int a;
    int isPrime = 1;
    if (a < 2){
        printf("Not Prime");
    }
    for (int i=2; i<=a; i++){
        if (a%i == 0){
            printf("Prime");
            isPrime = 0;
            break;
        }
        else{
            printf("Not Prime");
        }
    }
    if (isPrime){
        printf("Prime");
    }
}