#include <stdio.h>

int main() {
    int X, N, a, b;
    int total = 0;

    // 첫째 줄: 영수증에 적힌 총 금액 X
    scanf("%d", &X);

    // 둘째 줄: 구매한 물건의 종류의 수 N
    scanf("%d", &N);

    // 이후 N개의 줄: 각 물건의 가격 a와 개수 b
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a, &b);
        total += a * b;
    }

    // 총 금액이 영수증의 총 금액과 일치하는지 확인
    if (total == X) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}