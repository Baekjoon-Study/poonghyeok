#include <stdio.h>
#include <string.h>

int main(){
    char a[1000001];  // null 문자를 위해 1을 추가
    fgets(a, sizeof(a), stdin);  // 개행 문자를 포함하여 입력 받음
    int count = 0, len = strlen(a);

    // 개행 문자 제거
    if (a[len-1] == '\n') {
        a[len-1] = '\0';
        len--;
    }

    // 문자열을 순회하며 단어 수 세기
    for (int i = 0; i < len; i++) {
        if (a[i] != ' ' && (i == 0 || a[i-1] == ' ')) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}