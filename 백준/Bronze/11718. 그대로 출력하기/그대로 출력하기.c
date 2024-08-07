#include <stdio.h>
#include <string.h>
int main() {
    char line[101];  // 각 줄은 최대 100글자 + 널 종료 문자

    while (fgets(line, sizeof(line), stdin) != NULL) {
        // 개행 문자 제거
        line[strcspn(line, "\n")] = 0; //strcspn으로 line 배열의 개행문자 찾음
        
        // 빈 줄이 아닌 경우에만 출력
        if (strlen(line) > 0) {
            printf("%s\n", line);
        }
    }

    return 0;
}