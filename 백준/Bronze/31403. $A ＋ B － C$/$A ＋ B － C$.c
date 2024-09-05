#include <stdio.h>

int main(){
    int A, B, C, result1, result2;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    result1 = A + B - C;
    if (B<10){
        result2 = A*10 + B -C;
    }
    else if (B<100){
        result2 = A*100 + B - C;
    }
    else if (B<1000){
        result2 = A*1000 + B - C;
    }  
    else if(B == 1000)
        result2 = A*10000 + B - C;

    printf("%d\n", result1);
    printf("%d", result2);
    return 0;
}