#include <stdio.h>

int main(){
    int A, B;
    do{
        scanf("%d %d", &A, &B);
        if (A!=0 && B!=0)
            printf("%d\n", A+B);
    }while(A!=0 && B!=0);
    return 0;
}