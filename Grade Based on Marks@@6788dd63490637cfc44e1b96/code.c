#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a>=90){
        printf("A");
    }
    if (80>=a<90){
        printf("B");
    }
    if (70>=a<80){
        printf("C");
    }
    if (60>=a<70){
        printf("D");
    }
    else{
        printf("F");
    }
}