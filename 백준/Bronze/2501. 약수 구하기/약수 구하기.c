#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    
    int count = 0;
    int result = 0;
    
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
            if (count == K) {
                result = i;
                break;
            }
        }
    }
    
    printf("%d\n", result);
    
    return 0;
}
