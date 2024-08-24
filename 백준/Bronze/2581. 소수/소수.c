#include <stdio.h>
#include <stdbool.h>

// 소수 판별 함수
bool is_prime(int num) {
    if (num < 2) return false; // 2보다 작은 수는 소수가 아님
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int M, N;
    int sum = 0;
    int min_prime = -1;

    // M과 N 입력 받기
    scanf("%d %d", &M, &N);

    // M부터 N까지의 소수를 찾고 합과 최소값을 계산
    for (int i = M; i <= N; i++) {
        if (is_prime(i)) {
            sum += i;
            if (min_prime == -1) { // 첫 번째로 발견된 소수를 최소값으로 설정
                min_prime = i;
            }
        }
    }

    // 결과 출력
    if (sum > 0) {
        printf("%d\n", sum);
        printf("%d\n", min_prime);
    } else {
        printf("-1\n");
    }

    return 0;
}
