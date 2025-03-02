// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row; col++){
            printf(" ");
        }
        for(int k=1; k<=row; k++){
            printf("*");
        }
        printf("\n");
    }
}