//별찍기 - 다이아몬드 모양
#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    //상체~허리
    for (int i=0; i<N; i++){
        for (int j=N-1; j>i; j--){
            printf(" ");
        }
        for (int k=0; k<(2*i+1); k++){
            printf("*");
        }
        printf("\n");
    }
    //하체
    for (int i=N; i>1; i--){
        for (int j=0; j<(N-i+1); j++){
            printf(" ");
        }
        for (int k=(2*i-3); k>0; k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}