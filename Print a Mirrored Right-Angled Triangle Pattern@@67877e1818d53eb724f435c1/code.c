// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-1; col++){
            printf(" ");
        }
        for(int k=1; k<=n; k++){
            printf("*");
        }
    }
    printf("\n");
}