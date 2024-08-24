#include <stdio.h>

void prime_factorization(int n) {
    if (n == 1) {
        return;
    }

    // 2부터 시작하여 n의 소인수를 구함
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            printf("%d\n", i);
            n /= i;
        }
    }

    // 남은 수가 1보다 크면 소수이므로 출력
    if (n > 1) {
        printf("%d\n", n);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    prime_factorization(n);
    return 0;
}
