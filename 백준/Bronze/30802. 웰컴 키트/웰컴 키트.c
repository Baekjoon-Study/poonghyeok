#include <stdio.h>

int main(){
    int N, T, P, size[6];
    int T_set=0, P_set, P_unit;
    scanf("%d", &N);
    for (int i=0; i<6; i++){
        scanf("%d", &size[i]);
    }
    scanf("%d %d", &T, &P);

    //T 묶음 수 계산
    for (int i=0; i<6; i++){
        if (size[i] > 0){
            T_set += (size[i] + T - 1) / T;
        }
    }
    //P 묶음 수 계산
    P_set = N / P;
    P_unit = N % P;

    printf("%d\n", T_set);
    printf("%d %d", P_set, P_unit);

    return 0;
}