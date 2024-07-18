#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int i=1; i<=T; i++){
        for (int j=T; j>i; j--){
            printf(" ");
        }
        for (int k=0; k<i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}