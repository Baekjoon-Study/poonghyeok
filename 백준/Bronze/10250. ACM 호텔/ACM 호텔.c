#include <stdio.h>

int main() {
    int T; // 테스트 케이스 수
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int H, W, N; // H: 층수, W: 각 층의 방수, N: N번째 손님
        scanf("%d %d %d", &H, &W, &N);
        
        int floor = N % H; // 배정될 층수
        int room = (N - 1) / H + 1; // 배정될 방 번호
        
        if (floor == 0) {
            floor = H;
        }
        
        // 층수와 방 번호를 조합하여 결과 출력
        printf("%d%02d\n", floor, room);
    }
    
    return 0;
}
