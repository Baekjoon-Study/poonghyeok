#include <stdio.h>

int main(){
    int N, M, a[100];
    int x, y, z;
    scanf("%d %d", &N, &M);
    for (int i=0; i<N; i++){
        a[i] = i+1;
    }
    for (int i=0; i<M; i++){
        scanf("%d %d", &x, &y);
        while (x<y){
            z = a[x-1];
            a[x-1] = a[y-1];
            a[y-1] = z;
            x++;
            y--;
        }
    }
    for (int i=0; i<N; i++){
        printf("%d ", a[i]);
    }
    return 0;
}