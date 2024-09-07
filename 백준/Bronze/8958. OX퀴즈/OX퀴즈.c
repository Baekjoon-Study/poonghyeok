#include <stdio.h>
#include <string.h>

int main() {
    int testCases;
    
    // 테스트 케이스 수 입력
    scanf("%d", &testCases);
    
    for (int i = 0; i < testCases; i++) {
        char result[81];  // OX퀴즈 결과 문자열 (최대 길이 80 + null)
        scanf("%s", result);
        
        int score = 0, currentStreak = 0;
        
        // 문자열을 순회하면서 점수 계산
        for (int j = 0; j < strlen(result); j++) {
            if (result[j] == 'O') {
                currentStreak++;
                score += currentStreak;
            } else {
                currentStreak = 0;
            }
        }
        
        // 각 테스트 케이스의 점수 출력
        printf("%d\n", score);
    }
    
    return 0;
}
