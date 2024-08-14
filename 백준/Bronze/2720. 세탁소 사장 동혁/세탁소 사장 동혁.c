//세탁소 사장 동혁
#include <stdio.h>
//25 10 5 1
int main(){
    int T, C;
    int Q, D, N, P;
    scanf("%d", &T);
    for (int i=0; i<T; i++){
        scanf("%d", &C);

        Q = C/25;
        C %= 25;
         
        D = C/10;
        C %= 10;
            
        N = C/5;
        C %= 5;

        P = C;

        printf("%d %d %d %d\n", Q, D, N, P);
    }
    return 0;
}