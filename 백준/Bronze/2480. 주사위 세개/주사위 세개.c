#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    //같은 눈 세 개
    if (a==b && b==c && c==a)
        printf("%d", 10000+a*1000);

    //같은 눈 두 개
    if (a==b && b!=c)
        printf("%d", 1000+a*100);
    else if (b==c && c!=a)
        printf("%d", 1000+b*100);
    else if (c==a && a!=b)
        printf("%d", 1000+c*100);

    //모두 다른 눈
    if (a!=b && b!=c && c!=a)
        if(a>b && a>c)
            printf("%d", a*100);
        else if(b>a && b>c)
            printf("%d", b*100);
        else if(c>a && c>b)
            printf("%d", c*100);
    return 0;
}