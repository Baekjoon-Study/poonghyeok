#include <stdio.h>

int main() {
    int numbers[5]; // 5개의 숫자를 저장할 배열 선언
    int sum = 0;

    // 5개의 숫자를 입력받고 각 숫자를 제곱하여 더합니다.
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i] * numbers[i];
    }

    // 합을 10으로 나눈 나머지를 출력합니다.
    printf("%d\n", sum % 10);

    return 0;
}
