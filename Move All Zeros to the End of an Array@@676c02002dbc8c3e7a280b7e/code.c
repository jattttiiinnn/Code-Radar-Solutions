// Your code here...
#include <Stdio.h>

void Movezeroes(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n; j++) {
            if(arr[j] == 0) {
                for(int k=j+1; j<n; j++){
                    if(arr[k] != 0){
                        int temp = arr[j];
                        arr[j] = arr[k];
                        arr[k] = temp;
                        break;
                    }
                }
            }
        }
    }
}

int main() {
     int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    Movezeroes(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}