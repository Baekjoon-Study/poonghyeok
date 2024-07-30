#include <stdio.h>

int main(){
    int N, max=0;
    float sum=0, b[1000], a[1000];
    scanf("%d", &N);
    for (int i=0; i<N; i++){
        scanf("%f", &a[i]);
        if (a[i]>max){
            max = a[i];
        }
    }
    for (int i=0; i<N; i++){
        b[i] = (a[i]/max)*100;
        sum += b[i];
    }
    printf("%f", sum/N);
    return 0;
}