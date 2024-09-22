#include <stdio.h>

int main(){
    int L;
    char str[51];
    long long hash = 0;
    long long r = 31;
    long long M = 1234567891;
    long long power = 1;

    scanf("%d", &L);
    scanf("%s", str);

    for (int i=0; i<L; i++){
        //a=1, b=2 ... ...
        int value = str[i] - 'a' + 1;
        hash = (hash + value*power) % M;
        power = (power * r) % M;
    }

    printf("%lld\n", hash);
    return 0;
}