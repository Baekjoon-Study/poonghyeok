//진법 변환2
#include <stdio.h>

int main(){
    int N, B, index=0, X;
    char arr[100]={0};
    scanf("%d %d", &N, &B);
    while(N>0){
        X = N % B;
        if(X<10){
            arr[index++] = X + '0';
        }
        else{
            arr[index++] = X - 10 + 'A';
        }
        N /= B;
    }
    for (int i=index-1; i>=0; i--){
        printf("%c", arr[i]);
    }
    return 0;
}

