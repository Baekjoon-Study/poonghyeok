#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char numbers[101];
    int sum = 0;

    scanf("%d", &N);
    scanf("%s", numbers);

    for (int i = 0; i < N; i++) {
        sum += numbers[i] - '0';
    }
    printf("%d", sum);
    return 0;
}
