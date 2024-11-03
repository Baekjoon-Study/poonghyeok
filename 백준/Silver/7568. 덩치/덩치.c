#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int weight[100], height[100]; // 몸무게와 키를 저장할 배열
    int rank[100] = {0}; // 등수를 저장할 배열

    // 몸무게와 키 입력 받기
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &weight[i], &height[i]);
    }

    // 각 사람의 덩치 등수를 계산
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (weight[i] < weight[j] && height[i] < height[j]) {
                rank[i]++; // i가 j보다 작으면 rank[i] 증가
            }
        }
        rank[i]++; // 자기 자신을 포함한 순위를 위해 1 추가
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        printf("%d ", rank[i]);
    }
    printf("\n");

    return 0;
}
