#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

// 두 가지 체스판 패턴을 기반으로 다시 칠해야 할 칸 수를 계산하는 함수
int calculate_paint(char board[50][50], int start_row, int start_col, char first_color) {
    int paint_count = 0;
    char current_color = first_color;

    for (int i = start_row; i < start_row + 8; i++) {
        for (int j = start_col; j < start_col + 8; j++) {
            if (board[i][j] != current_color) {
                paint_count++;
            }
            current_color = (current_color == 'W') ? 'B' : 'W';
        }
        current_color = (current_color == 'W') ? 'B' : 'W';
    }

    return paint_count;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    char board[50][50];
    for (int i = 0; i < N; i++) {
        scanf("%s", board[i]);
    }

    int min_paint = 64; // 최대 64개의 칸을 다시 칠할 수 있음

    // 모든 8x8 부분 보드를 확인
    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            // 첫 칸이 'W'로 시작하는 체스판 패턴
            int paint_w = calculate_paint(board, i, j, 'W');
            // 첫 칸이 'B'로 시작하는 체스판 패턴
            int paint_b = calculate_paint(board, i, j, 'B');
            
            // 두 경우 중 최소값을 선택
            min_paint = min(min_paint, min(paint_w, paint_b));
        }
    }

    printf("%d\n", min_paint);
    return 0;
}
