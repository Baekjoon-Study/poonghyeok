#include <stdio.h>
#include <string.h>

int is_palindrome(char *num) {
    int len = strlen(num);  // 문자열의 길이
    for (int i = 0; i < len / 2; i++) {
        if (num[i] != num[len - i - 1]) {
            return 0;  // 팰린드롬이 아님
        }
    }
    return 1;  // 팰린드롬임
}

int main() {
    char num[6];  // 최대 5자리 숫자 + NULL 문자

    while (1) {
        scanf("%s", num);

        if (strcmp(num, "0") == 0) {
            break;  // 입력이 0이면 종료
        }

        if (is_palindrome(num)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
