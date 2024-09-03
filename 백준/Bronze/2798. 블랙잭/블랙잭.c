#include <stdio.h>

int main() {
    int N, M;
    int cards[100];
    int max_sum = 0;

    // 카드 개수 N과 목표 숫자 M 입력
    scanf("%d %d", &N, &M);

    // 카드 값 입력
    for (int i = 0; i < N; i++) {
        scanf("%d", &cards[i]);
    }

    // 가능한 모든 3장의 카드 조합을 탐색
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                int sum = cards[i] + cards[j] + cards[k];
                
                // 현재 합이 M을 넘지 않으면서 max_sum보다 크면 갱신
                if (sum <= M && sum > max_sum) {
                    max_sum = sum;
                }
            }
        }
    }

    // 결과 출력
    printf("%d\n", max_sum);

    return 0;
}
