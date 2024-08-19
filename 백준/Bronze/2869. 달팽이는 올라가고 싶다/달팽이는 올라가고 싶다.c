#include <stdio.h>
#include <math.h>

int main() {
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    
    int days = ceil((double)(V - A) / (A - B)) + 1;
    
    printf("%d\n", days);
    
    return 0;
}
