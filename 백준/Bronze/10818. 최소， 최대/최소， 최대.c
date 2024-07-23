#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    int max=-1000000, min=1000000;

    for (int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    for (int j=0; j<N; j++){
        if (arr[j]>max){
            max = arr[j];
        }
        if (arr[j]<min){
            min = arr[j];
        } 
    }
    printf("%d %d", min, max);
    return 0;
}


