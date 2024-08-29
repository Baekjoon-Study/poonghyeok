#include <stdio.h>

int main() {
    long long n;  // n의 최대 범위가 10^9이므로 long long 사용
    scanf("%lld", &n);

    // 둘레 계산
    long long perimeter = 4 * n;

    // 결과 출력
    printf("%lld\n", perimeter);

    return 0;
}
