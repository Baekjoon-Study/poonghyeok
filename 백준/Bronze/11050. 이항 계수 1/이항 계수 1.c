#include <stdio.h>

int factorial(int a){
    int sum=1;
    while (a>0){
        sum *= a;
        a--;
    }
    return sum;
}

int main(){
    int n, k, res;
    scanf("%d %d", &n, &k);

    if (k>=0 && k<=n){
        res = factorial(n) / (factorial(k)*factorial(n-k));
    }
    else{
        res = 0;
    }
    printf("%d", res);
    return 0;
}