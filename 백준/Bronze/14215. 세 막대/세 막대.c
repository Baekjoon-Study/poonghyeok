#include <stdio.h>

int main() {
    int a, b, c;
    
    // 세 막대의 길이를 입력받습니다.
    scanf("%d %d %d", &a, &b, &c);
    
    // 세 막대의 길이를 오름차순으로 정렬합니다.
    if (a > b) { int temp = a; a = b; b = temp; }
    if (b > c) { int temp = b; b = c; c = temp; }
    if (a > b) { int temp = a; a = b; b = temp; }
    
    // 삼각형의 조건을 만족하는지 확인합니다.
    if (a + b > c) {
        // 삼각형의 조건을 만족하면 둘레를 출력합니다.
        printf("%d\n", a + b + c);
    } else {
        // 삼각형의 조건을 만족하지 않으면 가장 긴 막대를 줄여서 조건을 맞춥니다.
        printf("%d\n", (a + b) * 2 - 1);
    }
    
    return 0;
}
