#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORDS 20000
#define MAX_LENGTH 51

// 비교 함수: 단어의 길이를 기준으로, 길이가 같다면 사전 순으로 정렬
int compare(const void *a, const void *b) {
    char *wordA = *(char **)a;
    char *wordB = *(char **)b;
    
    int lenA = strlen(wordA);
    int lenB = strlen(wordB);
    
    // 길이가 다르면 짧은 것이 먼저 오도록
    if (lenA != lenB) {
        return lenA - lenB;
    }
    
    // 길이가 같으면 사전 순으로 정렬
    return strcmp(wordA, wordB);
}

int main() {
    int N;
    char *words[MAX_WORDS];
    char buffer[MAX_LENGTH];
    
    // 입력
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", buffer);
        // 동적 메모리 할당 후 버퍼 내용을 저장
        words[i] = strdup(buffer);
    }
    
    // 정렬
    qsort(words, N, sizeof(char *), compare);
    
    // 출력: 중복 제거하면서 출력
    printf("%s\n", words[0]);  // 첫 번째 단어는 무조건 출력
    for (int i = 1; i < N; i++) {
        if (strcmp(words[i], words[i - 1]) != 0) {
            printf("%s\n", words[i]);
        }
    }
    
    // 메모리 해제
    for (int i = 0; i < N; i++) {
        free(words[i]);
    }

    return 0;
}
