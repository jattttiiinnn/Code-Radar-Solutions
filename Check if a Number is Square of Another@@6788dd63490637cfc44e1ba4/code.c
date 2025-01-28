#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = sqrt(b);
    if (c == a){
        printf("Yes");
    }
    else{
        printf("No");
    }
}