#include <stdio.h>

int main(){
    int A, B, C, H, M;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);
    if (B+C>=60){
        H = A+(B+C)/60;
        M = (B+C)%60;
        if (H>=24){
            H = H-24;
        }
        printf("%d %d", H, M);
    }
    else
        printf("%d %d", A, B+C);
    return 0;
}