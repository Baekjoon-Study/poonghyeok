#include <stdio.h>

int main(){
    int N, M, arr[100];
    int x, y, z;

    scanf("%d %d", &N, &M);
    for (int i=0; i<N; i++){
        arr[i] = i+1;
    }
    for (int i=0; i<M; i++){
        scanf("%d %d", &x, &y);
        z = arr[x-1];
        arr[x-1] = arr[y-1];
        arr[y-1] = z;
    }
    for (int i=0; i<N; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}