// Your code here...
#include <stdio.h>

int main(){
    int n, num = 1;
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        for(int k=1; k<i; k++){
            printf("%d ",num);
        }
    printf("\n");
    }
}