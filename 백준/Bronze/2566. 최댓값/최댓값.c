//최댓값
#include <stdio.h>

int main() {
    int A[9][9];
    int max = -1, row = 0, col = 0;

    // 9x9 격자판 입력 받기
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &A[i][j]);
            
            // 최댓값과 그 위치 갱신
            if (A[i][j] > max) {
                max = A[i][j];
                row = i + 1;
                col = j + 1;
            }
        }
    }

    // 결과 출력
    printf("%d\n", max);
    printf("%d %d\n", row, col);

    return 0;
}
