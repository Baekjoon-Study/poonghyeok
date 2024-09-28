#include <stdio.h>
#define MAX_NUM 10000

int main() {
    int N;
    int count[MAX_NUM + 1] = {0};  // 0부터 10000까지 등장 횟수를 저장하는 배열

    // 수의 개수 입력
    scanf("%d", &N);

    // 각 수의 등장 횟수를 카운트
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        count[num]++;
    }

    // 카운팅 배열을 바탕으로 정렬된 결과 출력
    for (int i = 1; i <= MAX_NUM; i++) {
        while (count[i] > 0) {
            printf("%d\n", i);
            count[i]--;
        }
    }

    return 0;
}
