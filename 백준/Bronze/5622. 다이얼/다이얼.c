#include <stdio.h>

// 각 알파벳에 해당하는 다이얼 번호를 반환하는 함수
int getDialNumber(char c) {
    if (c >= 'A' && c <= 'C') return 2;
    if (c >= 'D' && c <= 'F') return 3;
    if (c >= 'G' && c <= 'I') return 4;
    if (c >= 'J' && c <= 'L') return 5;
    if (c >= 'M' && c <= 'O') return 6;
    if (c >= 'P' && c <= 'S') return 7;
    if (c >= 'T' && c <= 'V') return 8;
    if (c >= 'W' && c <= 'Z') return 9;
    return 0; // 예외 처리
}

int main() {
    char word[16]; // 최대 15글자 + 널 종료 문자
    int totalTime = 0;

    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        int dialNumber = getDialNumber(word[i]);
        totalTime += dialNumber + 1; // 다이얼 번호 + 1초
    }

    printf("%d\n", totalTime);

    return 0;
}
