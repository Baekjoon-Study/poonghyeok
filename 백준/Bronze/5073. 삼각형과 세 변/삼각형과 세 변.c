#include <stdio.h>

int main() {
    int a, b, c;

    while (1) {
        // 세 변의 길이 입력 받기
        scanf("%d %d %d", &a, &b, &c);

        // 입력 종료 조건 확인
        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        // 유효한 삼각형인지 확인
        if (a + b <= c || a + c <= b || b + c <= a) {
            printf("Invalid\n");
        }
        // 세 변의 길이가 모두 같은 경우
        else if (a == b && b == c) {
            printf("Equilateral\n");
        }
        // 두 변의 길이만 같은 경우
        else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        }
        // 세 변의 길이가 모두 다른 경우
        else {
            printf("Scalene\n");
        }
    }

    return 0;
}
