#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int c = (b%10)*a;   //일의 자리
    int d = ((b/10)%10)*a; //십의 자리
    int e = (b/100)*a; //백의 자리

    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", c+d*10+e*100);
    return 0;
}