#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char name[101];
    int index; // 가입 순서를 저장하기 위한 필드
} Member;

int compare(const void *a, const void *b) {
    Member *memberA = (Member *)a;
    Member *memberB = (Member *)b;

    if (memberA->age == memberB->age) {
        return memberA->index - memberB->index; // 가입 순서를 기준으로 정렬
    }
    return memberA->age - memberB->age; // 나이를 기준으로 정렬
}

int main() {
    int N;
    scanf("%d", &N);

    Member members[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d %s", &members[i].age, members[i].name);
        members[i].index = i; // 가입 순서를 저장
    }

    qsort(members, N, sizeof(Member), compare);

    for (int i = 0; i < N; i++) {
        printf("%d %s\n", members[i].age, members[i].name);
    }

    return 0;
}
