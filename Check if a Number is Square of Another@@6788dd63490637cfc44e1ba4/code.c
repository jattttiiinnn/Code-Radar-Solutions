#include <stdio.h>
#include <math.h>
int main(){
    int a,c;
    float b;
    scanf("%d %f",&a,&b);
    c = sqrt(a);
    if (c == b){
        printf("Yes");
    }
    else{
        printf("No");
    }
}