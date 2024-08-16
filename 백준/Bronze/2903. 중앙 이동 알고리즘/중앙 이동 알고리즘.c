//중앙 이동 알고리즘
#include <stdio.h>
// (2^N+1)*(2^N+1)
int main(){
    int N;
    scanf("%d", &N);

    int point = (1<<N) + 1; //(2^N)+1
    printf("%d", point*point);
    return 0;
}