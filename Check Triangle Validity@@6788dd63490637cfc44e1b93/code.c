#include <stdio.h>
#include <stdbool.h>

int check(int a,int b,int c){
    if (a+b<=c || a+c<=b || b+c<=a)
        return false;
    return true;
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (check(a,b)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}