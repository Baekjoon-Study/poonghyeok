#include <stdio.h>
#include <string.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    int number = 666; // 첫 번째 종말의 수는 666부터 시작

    // N번째 종말의 수를 찾을 때까지 반복
    while (1) {
        // 숫자를 문자열로 변환하여 "666"이 포함되어 있는지 확인
        char str[20];
        sprintf(str, "%d", number);

        if (strstr(str, "666") != NULL) {
            count++; // "666"이 포함된 수를 찾으면 카운트 증가
        }

        // N번째 종말의 수를 찾았으면 출력하고 종료
        if (count == n) {
            printf("%d\n", number);
            break;
        }
        
        number++; // 다음 수로 이동
    }

    return 0;
}
