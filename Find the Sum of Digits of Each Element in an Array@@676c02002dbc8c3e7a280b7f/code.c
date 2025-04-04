#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int new_arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i=0; i<n; i++) {
         int num = arr[i];
        int digitSum = 0;
        do{
            digitSum += num % 10;
            num /= 10;
        }
        while(num<0){
            for(int i=0; i<n; i++) {
                int new_arr2 = -1;
                printf("%d",new_arr2);
            }
        }
        new_arr[i] = digitSum;
    }
    for(int i=0; i<n; i++) {
        printf("%d ",new_arr[i]);
    }
}