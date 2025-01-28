#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    scanf("%f %f",&a,&b);
    c = b*b;
    if (c == a){
        printf("Yes");
    }
    else{
        printf("No");
    }
}