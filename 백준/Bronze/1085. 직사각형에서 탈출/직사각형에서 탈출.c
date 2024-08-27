#include <stdio.h>

int main() {
    int x, y, w, h;
    
    // x, y, w, h 입력 받기
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    // 네 가지 거리 계산
    int distanceToLeft = x;
    int distanceToRight = w - x;
    int distanceToBottom = y;
    int distanceToTop = h - y;
    
    // 최솟값 구하기
    int minDistance = distanceToLeft;
    
    if (distanceToRight < minDistance)
        minDistance = distanceToRight;
    
    if (distanceToBottom < minDistance)
        minDistance = distanceToBottom;
    
    if (distanceToTop < minDistance)
        minDistance = distanceToTop;
    
    // 결과 출력
    printf("%d\n", minDistance);
    
    return 0;
}
