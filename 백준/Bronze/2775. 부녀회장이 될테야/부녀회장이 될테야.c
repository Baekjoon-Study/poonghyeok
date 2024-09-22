#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // 테스트 케이스 수 입력
    
    // 각 테스트 케이스에 대해
    while (T--) {
        int k, n;
        scanf("%d %d", &k, &n); // 층수 k와 호수 n 입력
        
        // 아파트 배열 초기화 (최대 k=14, n=14)
        int dp[15][15] = {0};
        
        // 0층 초기화: 0층의 i호에는 i명이 산다
        for (int i = 1; i <= 14; i++) {
            dp[0][i] = i;
        }
        
        // 1층부터 k층까지 사람 수 계산
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= 14; j++) {
                // i층 j호의 사람 수는 (i-1)층의 1호부터 j호까지 사람 수의 합
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }
        
        // 결과 출력: k층 n호의 사람 수
        printf("%d\n", dp[k][n]);
    }
    
    return 0;
}
