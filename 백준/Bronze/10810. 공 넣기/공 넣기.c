#include <stdio.h>

int main(){
    int N, M, arr[100] = {0};
    int i, j, k;
    scanf("%d %d", &N, &M);

    for (int q=0; q<M; q++){
        scanf("%d %d %d", &i, &j, &k);
        for (int w=i-1; w<j; w++){
            arr[w]=k;
        }
    }

    for (int x=0; x<N; x++){
        printf("%d ", arr[x]);
    }
    return 0;
}
