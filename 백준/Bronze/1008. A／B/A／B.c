#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    if(B != 0)
        printf("%0.9lf\n", (double) A/B);
    return 0;
}
