#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char a[4], b[4];
    scanf("%s %s", a, b);
    int temp, A, B;
    
    temp = a[0];
    a[0] = a[2];
    a[2] = temp;

    temp = b[0];
    b[0] = b[2];
    b[2] = temp;

    A = atoi(a);
    B = atoi(b);
    
    if (A>B){
        printf("%d", A);
    }
    else if (A<B){
        printf("%d", B);
    }
    return 0;
}