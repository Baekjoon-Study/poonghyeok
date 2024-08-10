#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[1000001];
    int freq[26] = {0};  // 알파벳 빈도를 저장할 배열
    int max_freq = 0;    // 최대 빈도를 저장할 변수
    char most_frequent = '?';  // 가장 많이 사용된 알파벳을 저장할 변수, 기본값은 '?'로 설정

    // 입력 받기
    scanf("%s", word);

    // 각 문자의 빈도 계산
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = toupper(word[i]);  // 대문자로 변환
        int idx = ch - 'A';          // 알파벳 배열 인덱스로 변환
        freq[idx]++;                 // 해당 알파벳 빈도 증가

        // 빈도가 더 큰 알파벳을 발견했을 경우
        if (freq[idx] > max_freq) {
            max_freq = freq[idx];
            most_frequent = ch;
        }
        // 동일한 빈도의 알파벳이 발견된 경우
        else if (freq[idx] == max_freq) {
            most_frequent = '?';
        }
    }

    // 결과 출력
    printf("%c\n", most_frequent);

    return 0;
}
