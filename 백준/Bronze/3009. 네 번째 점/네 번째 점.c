#include <stdio.h>

int main() {
    int x[3], y[3];  // 세 점의 x, y 좌표를 저장할 배열

    // 세 점의 좌표를 입력 받음
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    int fourth_x, fourth_y;

    // x 좌표 중에서 두 번 나온 것을 찾음
    if (x[0] == x[1]) {
        fourth_x = x[2];
    } else if (x[0] == x[2]) {
        fourth_x = x[1];
    } else {
        fourth_x = x[0];
    }

    // y 좌표 중에서 두 번 나온 것을 찾음
    if (y[0] == y[1]) {
        fourth_y = y[2];
    } else if (y[0] == y[2]) {
        fourth_y = y[1];
    } else {
        fourth_y = y[0];
    }

    // 네 번째 점의 좌표를 출력
    printf("%d %d\n", fourth_x, fourth_y);

    return 0;
}
