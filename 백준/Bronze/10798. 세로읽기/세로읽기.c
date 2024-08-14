#include <stdio.h>
#include <string.h>

int main() {
    char words[5][16] = {0};  // 5개의 단어, 각 단어는 최대 15글자 + null 문자

    // 5개의 단어를 입력받는다.
    for (int i = 0; i < 5; i++) {
        scanf("%s", words[i]);  // 각 단어를 입력받는다
    }

    // 세로로 읽으면서 출력한다.
    for (int j = 0; j < 15; j++) {  // 각 단어의 최대 길이 15글자까지 확인
        for (int i = 0; i < 5; i++) {
            if (words[i][j] != '\0') {  // 해당 위치에 글자가 존재하는지 확인
                printf("%c", words[i][j]);
            }
        }
    }

    return 0;
}
