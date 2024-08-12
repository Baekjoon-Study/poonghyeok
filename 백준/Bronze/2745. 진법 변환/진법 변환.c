//진법 변환
#include <stdio.h>
#include <string.h>

int main(){ 
    char N[100];
    int B, result=0, temp;
    scanf("%s %d", N, &B);
    int len = strlen(N)-1;
    for (int i=len; N[len-i] != '\0'; i--){
        if ('0'<=N[len-i] && N[len-i]<='9'){
            temp = N[len-i] - '0';
        }
        else {
            temp = N[len-i] - 'A' + 10;
        }

        result += temp*pow(B,i);
    }
    printf("%d\n", result);
    return 0;
}