#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    if (b != 0) {
        printf("%d\n", a / b);
        printf("%d\n", a % b);
    } else {
        printf("나눌 수 없음.\n");
    }
    return 0;
}
