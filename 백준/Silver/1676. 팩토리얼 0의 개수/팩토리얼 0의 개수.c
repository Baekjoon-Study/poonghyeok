#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    
    // 5의 배수를 찾아서 count에 더하기
    for (int i = 5; i <= n; i *= 5) {
        count += n / i;
    }

    printf("%d\n", count);
    return 0;
}
