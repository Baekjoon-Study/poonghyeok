#include <stdio.h>

int main() {
    int A, B, C;
    int result;
    int digitCount[10] = {0};  // 0부터 9까지의 숫자 등장 횟수를 저장할 배열
    
    // 세 개의 자연수를 입력받음
    scanf("%d %d %d", &A, &B, &C);
    
    // A × B × C 계산
    result = A * B * C;
    
    // 결과값에서 각 자릿수를 세는 과정
    while (result > 0) {
        int digit = result % 10;  // 현재 자릿수의 숫자
        digitCount[digit]++;  // 해당 숫자의 등장 횟수를 증가
        result /= 10;  // 다음 자릿수로 이동
    }
    
    // 각 숫자의 등장 횟수를 출력
    for (int i = 0; i < 10; i++) {
        printf("%d\n", digitCount[i]);
    }
    
    return 0;
}
