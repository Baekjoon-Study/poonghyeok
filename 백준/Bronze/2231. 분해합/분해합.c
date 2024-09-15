#include <stdio.h>

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N;
    scanf("%d", &N);
    
    int result = 0; // 생성자를 저장할 변수
    
    // 생성자가 있을 수 있는 범위는 N-54부터 N까지
    for (int i = N - 54; i < N; i++) {
        if (i + sum_of_digits(i) == N) {
            result = i;
            break;
        }
    }
    
    // 생성자가 없으면 0 출력
    printf("%d\n", result);
    
    return 0;
}
