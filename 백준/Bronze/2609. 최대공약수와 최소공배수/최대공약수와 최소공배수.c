#include <stdio.h>

// 유클리드 호제법을 이용한 최대공약수 계산
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// 최소공배수 계산
int lcm(int a, int b, int gcd_value) {
    return (a * b) / gcd_value;
}

int main() {
    int a, b;
    
    // 두 자연수 입력받기
    scanf("%d %d", &a, &b);
    
    // 최대공약수 구하기
    int gcd_value = gcd(a, b);
    
    // 최소공배수 구하기
    int lcm_value = lcm(a, b, gcd_value);
    
    // 출력
    printf("%d\n", gcd_value);  // 최대공약수 출력
    printf("%d\n", lcm_value);  // 최소공배수 출력
    
    return 0;
}
