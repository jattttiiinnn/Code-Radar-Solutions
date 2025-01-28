#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = sqrt(a);
    if (c == b){
        printf("Yes");
    }
    else{
        printf("No");
    }
}